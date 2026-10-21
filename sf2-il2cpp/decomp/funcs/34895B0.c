// OICHGEFJHDF$$KNAPKCEKINL @ RVA 0x34895B0

void OICHGEFJHDF__KNAPKCEKINL(OICHGEFJHDF_o *__this,float IKJIPFLDNGG,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar2;
  
  if ((DAT_045683ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683ca = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).AMCHMHHIMPO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).AMCHMHHIMPO;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress(pNVar2,IKJIPFLDNGG,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

