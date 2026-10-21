// Nekki.SF2.GUI.Map.MapScene$$GoToRaidClick @ RVA 0x3588CC4

void Nekki_SF2_GUI_Map_MapScene__GoToRaidClick
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  long lVar1;
  KAKGABBLHGP_o *__this_00;
  undefined8 uVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((DAT_04568d15 & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_FLAPJEGKBIO__);
    DAT_04568d15 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  auVar8._8_8_ = method;
  auVar8._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar8 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar8._0_8_ + 0xc0) + 0x10);
  auVar9._8_8_ = auVar8._8_8_;
  auVar9._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar9 = FUN_01b81620(lVar1,auVar8._8_8_);
  }
  lVar1 = Method_System_Array_Empty<PackType>__;
  uVar2 = auVar9._8_8_;
  lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  plVar7 = (long *)**(undefined8 **)(auVar9._0_8_ + 0xb8);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
    lVar4 = *(long *)(lVar1 + 0x38);
    uVar2 = extraout_x1_00;
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620(lVar4,uVar2);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar1 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
  uVar2 = thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
  System_Action<object>___ctor();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar1 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(JNDFOKIMHPB_c **)(piVar6 + -2) == JNDFOKIMHPB_TypeInfo) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03688e6c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar7,JNDFOKIMHPB_TypeInfo,0);
LAB_03688e6c:
                    /* WARNING: Could not recover jumptable at 0x03688e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,__this_00,uVar2,puVar3[1]);
  return;
}

