// Nekki.SF2.GUI.TableView$$LDHGBDGHOKI @ RVA 0x30DA6C0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TableView__LDHGBDGHOKI(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0456634a & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456634a = 1;
    method = extraout_x1;
  }
  (__this->fields).PIHMBLAFPBJ = false;
  pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_02 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    fVar4 = (pNVar2->fields).super.CDHNBOKGCCN.fields.x;
    fVar5 = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
    if (ABS(fVar4 * fVar4 + fVar5 * fVar5) <= 1e-10) {
      return;
    }
    pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((__this->fields).tableViewOrientation != 0) {
      fVar5 = -fVar4;
    }
    if (pNVar3 != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
      JDEFJPHCNMM = (pNVar3->fields).FIMCNHGPCNA;
      fVar5 = fVar5 * 0.5;
      method_00 = extraout_x1_00;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      if (ABS((__this->fields)._MinScrollVelocity * 0.5) <= ABS(fVar5)) {
        JDEFJPHCNMM = Nekki_SF2_GUI_TableView__GetNearestCellRow(__this,fVar5,method_00);
      }
      pNVar2 = (__this->fields).IDIMFLMKDMD;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
        (pNVar2->fields).super.CDHNBOKGCCN.fields =
             (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
        pNVar2 = (__this->fields).IDIMFLMKDMD;
        if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
          fVar6 = (pNVar2->fields).super.CDHNBOKGCCN.fields.x;
          fVar4 = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
          if (DAT_045602fb == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_045602fb = '\x01';
          }
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar5 = ABS((float)(int)(fVar5 / SQRT(fVar6 * fVar6 + fVar4 * fVar4)));
          if (0.5 < fVar5) {
            fVar5 = 0.5;
          }
          fVar4 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_02);
          Nekki_SF2_GUI_TableView__SetPosition(__this,fVar4,fVar5,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

