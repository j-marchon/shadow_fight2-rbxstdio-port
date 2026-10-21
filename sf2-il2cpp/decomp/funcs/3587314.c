// Nekki.SF2.GUI.Map.MapScene$$EADCMKDANAH @ RVA 0x3587314

void Nekki_SF2_GUI_Map_MapScene__EADCMKDANAH
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  long lVar1;
  KAKGABBLHGP_o *__this_00;
  System_Action_KHODJHFHCDE__o **ppSVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  System_Action_KHODJHFHCDE__o *pSVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((DAT_04568d0a & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<PackType>__);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_LJCDNPCPLED__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo);
    DAT_04568d0a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03687390 to 03787397 has its CatchHandler @ 036873dc */
  lVar1 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
  auVar10._8_8_ = method;
  auVar10._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 036873a0 to 037873a7 has its CatchHandler @ 036873d8 */
    auVar10 = FUN_01b81620(lVar1,method);
  }
                    /* try { // try from 036873a8 to 037873f3 has its CatchHandler @ 036871e4 */
  lVar1 = *(long *)(*(long *)(auVar10._0_8_ + 0xc0) + 0x10);
  auVar11._8_8_ = auVar10._8_8_;
  auVar11._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar11 = FUN_01b81620(lVar1,auVar10._8_8_);
  }
  lVar1 = Method_System_Array_Empty<PackType>__;
  uVar4 = auVar11._8_8_;
  lVar5 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  plVar8 = (long *)**(undefined8 **)(auVar11._0_8_ + 0xb8);
  if (lVar5 == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036873a0 with catch @ 036873d8
                        */
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03687390 with catch @ 036873dc
                        */
    lVar5 = *(long *)(lVar1 + 0x38);
    uVar4 = extraout_x1_00;
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620(lVar5,uVar4);
  }
                    /* try { // try from 036873f4 to 037873f7 has its CatchHandler @ 03687420 */
  if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 036873f8 to 0378742f has its CatchHandler @ 036871e4 */
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 036873f4 with catch @ 03687420 */
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar1 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
                    /* try { // try from 03687430 to 03787437 has its CatchHandler @ 0368744c */
                    /* try { // try from 03687438 to 03787443 has its CatchHandler @ 036871e4 */
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
                    /* try { // try from 03687444 to 0378744b has its CatchHandler @ 0368744c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03687430 with catch @ 0368744c
                       catch(type#2 @ 00000000) { ... } // from try @ 03687444 with catch @ 0368744c
                        */
  if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__99_0;
  if (pSVar9 == (System_Action_KHODJHFHCDE__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = (System_Action_KHODJHFHCDE__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__99_0;
    *ppSVar2 = pSVar9;
    thunk_FUN_01c20e04(ppSVar2,pSVar9);
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar1 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(JNDFOKIMHPB_c **)(piVar7 + -2) == JNDFOKIMHPB_TypeInfo) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03687514;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar8,JNDFOKIMHPB_TypeInfo,0);
LAB_03687514:
                    /* WARNING: Could not recover jumptable at 0x03687530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar8,__this_00,pSVar9,puVar3[1]);
  return;
}

