// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$HGFBAHOOAFD @ RVA 0x358C104

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__HGFBAHOOAFD
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppType *handle;
  undefined8 uVar2;
  bool bVar3;
  System_Type_o *enumType;
  System_String_o *value;
  Il2CppObject *pIVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  MethodInfo *method_00;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  System_Enum_o local_50;
  undefined4 local_40;
  undefined4 local_34;
  
  if ((DAT_04568d4a & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_var);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__);
    FUN_01bab630(&HCOEEOMMEFL_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_11976);
    DAT_04568d4a = 1;
  }
  handle = Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_var;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Convert_TypeInfo);
    }
    value = System_Convert__ToString(IMMNELPBGIF,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pIVar4 = System_Enum__Parse(enumType,value,(MethodInfo *)0x0);
    if (pIVar4 == (Il2CppObject *)0x0) {
LAB_0368c354:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pIVar4->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    puVar5 = (undefined4 *)thunk_FUN_01bda96c();
    uVar1 = *puVar5;
    local_34 = 1;
    pIVar4 = (Il2CppObject *)
             thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_34);
    local_50.klass = (System_Enum_c *)Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = uVar1;
    bVar3 = System_Enum__Equals(&local_50,pIVar4,(MethodInfo *)0x0);
    if (bVar3) {
      Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IHJKELCFHIE(__this,method_00);
      lVar6 = *(long *)(Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      uVar2 = StringLiteral_11976;
      plVar10 = (long *)**(undefined8 **)(lVar6 + 0xb8);
      if (plVar10 == (long *)0x0) goto LAB_0368c354;
      lVar6 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(HCOEEOMMEFL_c **)(piVar9 + -2) == HCOEEOMMEFL_TypeInfo) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0368c32c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar10,HCOEEOMMEFL_TypeInfo,1);
LAB_0368c32c:
      (*(code *)*puVar7)(plVar10,uVar2,0,puVar7[1]);
    }
  }
  return;
}

