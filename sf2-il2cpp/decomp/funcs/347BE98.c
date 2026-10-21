// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$EJHAPHAHMHG @ RVA 0x347BE98

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  long lVar1;
  HHKELHDGPDO_o *pHVar2;
  long lVar3;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_String_o *pSVar4;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04568356 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_15861);
    DAT_04568356 = 1;
  }
  pHVar2 = (__this->fields).PAAIEEFEBKK;
  if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_BaseDialog__EJHAPHAHMHG
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(pHVar2->fields).JIJLBFGKNJK,
               (MethodInfo *)0x0);
    pHVar2 = (__this->fields).PAAIEEFEBKK;
    if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
      pSVar4 = (pHVar2->fields).JIJLBFGKNJK;
      local_34 = (pHVar2->fields).OJHKNOGKBDF;
      __this_00 = (__this->fields).super._header;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      pHVar2 = (__this->fields).PAAIEEFEBKK;
      if (pHVar2 != (HHKELHDGPDO_o *)0x0) {
        local_38 = (pHVar2->fields).ICMILHJGAAC;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        pSVar4 = System_String__Format
                           (StringLiteral_15861,(Il2CppObject *)pSVar4,arg1,arg2,(MethodInfo *)0x0);
        lVar1 = Method_System_Array_Empty<object>__;
        lVar3 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
        if (lVar3 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<object>__);
          lVar3 = *(long *)(lVar1 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01b81620();
        }
        pSVar4 = System_String__Format
                           (pSVar4,(System_Object_array *)**(undefined8 **)(lVar1 + 0xb8),
                            (MethodInfo *)0x0);
        if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,pSVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

