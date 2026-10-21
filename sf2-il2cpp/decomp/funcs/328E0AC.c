// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HOPIJLFCJLL @ RVA 0x328E0AC

bool Nekki_SF2_GUI_Dialogs_LotteryDialog__HOPIJLFCJLL
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,DILGLGMKOFG_o *NFIGEAOPJKM,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  Il2CppObject *pIVar4;
  BECIPDJBAOG_o *pBVar5;
  System_String_o *a;
  
  if ((DAT_045672f8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_045672f8 = 1;
  }
  if (((NFIGEAOPJKM != (DILGLGMKOFG_o *)0x0) &&
      (pBVar5 = (__this->fields).FBODAFDBNLH, pBVar5 != (BECIPDJBAOG_o *)0x0)) &&
     (pGVar3 = (pBVar5->fields).LEJBLHJFJHP,
     pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    a = (NFIGEAOPJKM->fields).super._COIPKAKHDFP_k__BackingField;
    pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                        Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar2 = System_String__op_Equality(a,pIVar4[1].monitor,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
      pBVar5 = (__this->fields).FBODAFDBNLH;
      if ((pBVar5 != (BECIPDJBAOG_o *)0x0) &&
         (pGVar3 = (pBVar5->fields).LEJBLHJFJHP,
         pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
        iVar1 = (NFIGEAOPJKM->fields).super._HFPMLGFDOKC_k__BackingField;
        pIVar4 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,0,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                           );
        if (pIVar4 != (Il2CppObject *)0x0) {
          return iVar1 == *(int *)&pIVar4[2].klass;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

