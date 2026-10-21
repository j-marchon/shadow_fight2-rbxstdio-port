// Nekki.SF2.GUI.TableView$$GFAFEFPKGLH @ RVA 0x30DA350

UnityEngine_SocialPlatforms_Range_o
Nekki_SF2_GUI_TableView__GFAFEFPKGLH(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  KMAKOOHEKNB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x2;
  float fVar3;
  float fVar4;
  float val2;
  float fVar5;
  UnityEngine_SocialPlatforms_Range_Fields local_38;
  
  if ((DAT_04566351 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566351 = 1;
    method = extraout_x1;
  }
  fVar5 = (__this->fields).GMCDBHFHFGF;
  fVar3 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method);
  fVar4 = Nekki_SF2_GUI_TableView__PositionForRow(__this,0,in_x2);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar3 = System_Math__Max(fVar5 + fVar3 * -1.5,fVar4,(MethodInfo *)0x0);
  fVar5 = (__this->fields).GMCDBHFHFGF;
  fVar4 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
  __this_00 = (__this->fields).HCLHHHKCABP;
  if (__this_00 != (KMAKOOHEKNB_o *)0x0) {
    iVar1 = KMAKOOHEKNB__IBLCNILBAHE(__this_00,(MethodInfo *)0x0);
    val2 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar1 + -1,in_x2);
    fVar4 = System_Math__Min(fVar5 + fVar4 * 1.5,val2,(MethodInfo *)0x0);
    iVar1 = Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition(__this,fVar3,method_01);
    iVar2 = Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition(__this,fVar4,method_02);
    local_38.from = 0;
    local_38.count = 0;
    UnityEngine_SocialPlatforms_Range___ctor
              ((UnityEngine_SocialPlatforms_Range_o)&local_38,iVar1,(iVar2 - iVar1) + 1,
               (MethodInfo *)0x0);
    return (UnityEngine_SocialPlatforms_Range_o)local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

