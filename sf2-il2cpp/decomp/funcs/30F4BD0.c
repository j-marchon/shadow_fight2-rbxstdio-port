// Nekki.SF2.GUI.ResolutionButton$$LKIAIJLDEMF @ RVA 0x30F4BD0

void Nekki_SF2_GUI_ResolutionButton__LKIAIJLDEMF
               (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,
               System_Action_Sprite__o *KFPPFIGOKNI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *pUVar2;
  
  if ((DAT_04566445 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04566445 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(HCAAAAMDCNO,(MethodInfo *)0x0);
  if ((KFPPFIGOKNI != (System_Action_Sprite__o *)0x0) && (!bVar1)) {
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,false,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031f4c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(KFPPFIGOKNI->fields).super.super.invoke_impl)
              ((KFPPFIGOKNI->fields).super.super.method_code,pUVar2,
               (KFPPFIGOKNI->fields).super.super.method);
    return;
  }
  return;
}

