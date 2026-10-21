// Nekki.SF2.GUI.Dialogs.LotteryDialog$$MLJCPJAFHPC @ RVA 0x328D2BC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__MLJCPJAFHPC
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  Il2CppObject *pIVar4;
  BECIPDJBAOG_o *pBVar5;
  System_String_o *a;
  
                    /* try { // try from 0338d2c0 to 0348d35b has its CatchHandler @ 0338cf50 */
  if ((DAT_045672e7 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_045672e7 = 1;
  }
  if (((NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) &&
      (pBVar5 = (__this->fields).FBODAFDBNLH, pBVar5 != (BECIPDJBAOG_o *)0x0)) &&
     (pGVar3 = (pBVar5->fields).AKFPFIHIHOC,
     pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    a = (NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField;
    pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                        Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar2 = System_String__op_Equality(a,pIVar4[1].monitor,(MethodInfo *)0x0);
      if (!bVar2) {
                    /* try { // try from 0338d368 to 0348d36b has its CatchHandler @ 0338d3a4 */
                    /* try { // try from 0338d36c to 0348d36f has its CatchHandler @ 0338d39c */
                    /* try { // try from 0338d370 to 0348d373 has its CatchHandler @ 0338d398 */
                    /* try { // try from 0338d374 to 0348d377 has its CatchHandler @ 0338d394 */
                    /* try { // try from 0338d378 to 0348d37b has its CatchHandler @ 0338d3b8 */
        return false;
      }
      pBVar5 = (__this->fields).FBODAFDBNLH;
      if ((pBVar5 != (BECIPDJBAOG_o *)0x0) &&
         (pGVar3 = (pBVar5->fields).AKFPFIHIHOC,
         pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
        iVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField;
        pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                           );
        if (pIVar4 != (Il2CppObject *)0x0) {
                    /* try { // try from 0338d35c to 0348d363 has its CatchHandler @ 0338d3ac */
          return iVar1 == *(int *)&pIVar4[2].klass;
                    /* try { // try from 0338d364 to 0348d367 has its CatchHandler @ 0338d3b8 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0338d37c to 0348d37f has its CatchHandler @ 0338cf50 */
  FUN_01bab8c8();
}

