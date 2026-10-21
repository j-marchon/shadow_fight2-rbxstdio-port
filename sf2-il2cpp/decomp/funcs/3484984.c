// Nekki.SF2.GUI.Dialogs.SettingsDialog$$GNHCEDFBDIM @ RVA 0x3484984

void Nekki_SF2_GUI_Dialogs_SettingsDialog__GNHCEDFBDIM
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,bool EICBDKDKKKO,MethodInfo *method)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  method_00 = (MethodInfo *)(ulong)EICBDKDKKKO;
  if ((DAT_0456839c & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&StringLiteral_6888);
    DAT_0456839c = 1;
    method_00 = extraout_x1;
  }
  if (!EICBDKDKKKO) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__UpdateLabels(__this,method_00);
  lVar2 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  uVar1 = StringLiteral_6888;
  plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(HCOEEOMMEFL_c **)(piVar5 + -2) == HCOEEOMMEFL_TypeInfo) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_03584a84;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar6,HCOEEOMMEFL_TypeInfo,1);
LAB_03584a84:
                    /* WARNING: Could not recover jumptable at 0x03584a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,uVar1,0,puVar3[1]);
  return;
}

