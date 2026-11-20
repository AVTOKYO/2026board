# ATtiny402 ゆっくり点滅・初回動作確認

[English](README_EN.md)

AVTOKYO_SlowBlink/AVTOKYO_SlowBlink.ino をArduino IDEで開く。
2つのLEDを同時に1秒点灯、2秒消灯。ON_MS / OFF_MSで変更可能。
これは明確なON/OFFの確認用。フェードや省電力スリープは未実装。
基板はLOW点灯：D1=PA1(物理4番)、D2=PA2(物理5番)。Rev Mも同じ接続。

## 準備
- ATtiny402、C1 0.22uF、LED2個と各1kΩ抵抗を実装。
- 電池を外してJP1・JP2の1–2間の切断をテスター確認、2–3をブリッジ。
- 消灯しただけでは切断の証明にはならない。U1の隣接端子のはんだ短絡も確認。
- 3.3Vのターゲット電源と信号に対応するUSB-UPDI書込器を使う。
- STM32用ST-LINKのSWD端子はUPDI非対応。そのままGVUに接続しない。
- USBシリアル変換器はSerialUPDI用回路にした場合に使用可能。TX/RXを直接GVUに接続しない。

## 接続
電池を外しSW1をOFF。書込器だけから給電する。
G -> 書込器GND
V -> 書込器のターゲット電源出力3.3V（VTref入力とは別）
U -> 書込器UPDI
書込器の電圧を確認。5V出力を3.3Vと思い込まない。
Vはスイッチ後の電源なので、SW1がOFFでも書込器からMCUとLEDへ給電される。
書込器の型番により給電機能と端子順が違うためラベルを確認する。

## Arduino IDE + megaTinyCore
1. 環境設定の追加ボードマネージャURLへ以下を追加：
   https://raw.githubusercontent.com/SpenceKonde/ReleaseScripts/refs/heads/master/package_drazzy.com_index.json
2. ボードマネージャでmegaTinyCoreをインストール。
3. ボードはATtiny402を含む系列（ATtiny412/402/212/202等）、ChipをATtiny402。
4. 内部クロック5MHz、millis()/micros()は有効（既定値）、UPDIピンはUPDIのまま。
   BODはDisabled（電池電圧低下時の試作向け）。Optibootは使わない。
5. SerialUPDI対応書込器なら「SerialUPDI」の低速設定を選び、そのシリアルポートを指定。
   他方式のUPDI書込器では対応するProgrammerを選択する。
6. 初回は「ブートローダを書き込む」でヒューズ設定を反映する。
   この構成ではブートローダ本体を使う意味ではない。UPDIをGPIO/RESETへ変更しない。
7. 「検証」でコンパイルし、「書込装置を使って書き込む」を実行。
8. 書込・検証成功後、書込器を外しCR2032を入れてSW1をON。
   両目が1秒点灯/2秒消灯すれば基本動作確認OK。

## 検証状態
配線先はプロジェクトの回路構成とmegaTinyCoreのピン定義を照合済み。
Rev M実機での書込・点滅動作の確認結果は未記録。
製造用Gerberは変更していない。

## 参照
- https://github.com/SpenceKonde/megaTinyCore
- https://github.com/SpenceKonde/megaTinyCore/blob/master/megaavr/extras/ATtiny_x02.md
- https://github.com/SpenceKonde/megaTinyCore/blob/master/megaavr/variants/txy2/pins_arduino.h
- https://github.com/SpenceKonde/AVR-Guidance/blob/master/UPDI/jtag2updi.md
