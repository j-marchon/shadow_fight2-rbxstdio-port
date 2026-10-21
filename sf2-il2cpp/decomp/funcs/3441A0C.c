// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_Instance @ RVA 0x3441A0C

Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar3;
  
  if ((DAT_04568223 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DownloadingScreen>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15459);
    FUN_01bab630(&StringLiteral_10401);
    DAT_04568223 = 1;
  }
  pNVar3 = Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load(StringLiteral_10401,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pUVar2->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar2);
    }
    UnityEngine_Object__set_name(pUVar2,StringLiteral_15459,(MethodInfo *)0x0);
    pNVar3 = (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,
                        Method_UnityEngine_GameObject_GetComponent<DownloadingScreen>__);
    Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK = pNVar3;
                    /* try { // try from 03541b44 to 03641b4b has its CatchHandler @ 03541c04 */
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields,pNVar3);
                    /* try { // try from 03541b54 to 03641b5f has its CatchHandler @ 03541c00 */
    UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
  }
                    /* try { // try from 03541b60 to 03641bdf has its CatchHandler @ 03541a04 */
  return Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK;
}

