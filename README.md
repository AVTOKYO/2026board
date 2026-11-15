# AVTOKYO 2026 LED Charm

no drink, no hack

**Assembly guide / 作り方 — [日本語](docs/ASSEMBLY_JA.md) · [English](docs/ASSEMBLY_EN.md)**

自分ではんだ付けして光らせる、AVTOKYOのPCBチャームです。基本セットは赤いLEDが2個点灯します。さらにATtiny402を追加すると、プログラムで点滅を変えられます。

**はじめて組み立てる方は、[組立説明書](docs/ASSEMBLY_JA.md)から始めてください。**

| 内容 | ファイル |
|---|---|
| 基本の組み立て | [組立説明書](docs/ASSEMBLY_JA.md) |
| 用意する部品 | [部品表](docs/PARTS_JA.md) |
| MCUを追加する工作 | [改造ガイド](docs/HACK_JA.md) |
| 書き込みと点滅プログラム | [ファームウェア説明](firmware/README_JA.md) |
| 基板を発注する | [製造手順](manufacturing/README.md) |
| 最終製造用データ | [Rev M Gerber ZIP](manufacturing/AVTOKYO_LED_Charm_RevM_FINAL_JLCPCB.zip) |
| 編集する基板データ | [KiCad PCB](hardware/AVTOKYO_LED_Charm.kicad_pcb)・[回路図](hardware/AVTOKYO_LED_Charm.kicad_sch) |

対象はRev Mです。回路図・基板データはKiCad 10で保存しています。ファイル一式をダウンロードしてから、hardware内のプロジェクトを開いてください。

## 確認状況

製造用データは回路図との照合を含むDRC・ERCを通過しています。検査結果はvalidationに収録しています。Rev Mの実機組立・MCU書込については最終確認結果が未記録です。

## 公開時のライセンス

基板データ、プログラム、説明書のライセンスと、AVTOKYOロゴの利用条件は公開前に決定してください。
