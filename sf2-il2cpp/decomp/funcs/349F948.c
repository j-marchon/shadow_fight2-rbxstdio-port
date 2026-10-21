// Nekki.SF2.GUI.Map.MapPanel$$AddRaidZone @ RVA 0x349F948

void Nekki_SF2_GUI_Map_MapPanel__AddRaidZone
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  System_String_o *message;
  MEJIKMPNBNL_o *pMVar1;
  MEJIKMPNBNL_o **ppMVar2;
  
  if ((DAT_0456848c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_8831);
    FUN_01bab630(&StringLiteral_254);
    FUN_01bab630(&StringLiteral_8830);
    DAT_0456848c = 1;
  }
  if ((__this->fields)._LGKLAOCDMGF_k__BackingField == false) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8831,(MethodInfo *)0x0);
  }
  ppMVar2 = &(__this->fields)._PEMNOEOCALC_k__BackingField;
  pMVar1 = *ppMVar2;
  if (pMVar1 != (MEJIKMPNBNL_o *)0x0) {
    if (BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = StringLiteral_254;
    message = System_String__Concat
                        (StringLiteral_8830,(pMVar1->fields).DEKCPPOJFEH,
                         (System_String_o *)StringLiteral_254,(BHHBEIACGPB->fields).DEKCPPOJFEH,
                         (MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  }
  (__this->fields)._PEMNOEOCALC_k__BackingField = BHHBEIACGPB;
  thunk_FUN_01c20e04(ppMVar2,BHHBEIACGPB);
  Nekki_SF2_GUI_Map_MapPanel__HPKGLFMFKPI(__this,BHHBEIACGPB,method);
  return;
}

