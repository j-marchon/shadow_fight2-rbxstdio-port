// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$NCMPNFLGPPE @ RVA 0x35AE194

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__NCMPNFLGPPE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  int64_t CJNHFNHJHPE;
  System_String_o *pSVar1;
  System_String_o *str0;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  IFFFKKMMKFO_o *pIVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  long lVar5;
  undefined8 *puVar6;
  Nekki_SF2_GUI_LabelAlias_c *pNVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_3c;
  long local_38;
  
  if ((DAT_04568e6b & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_8188);
    FUN_01bab630(&StringLiteral_8705);
    FUN_01bab630(&StringLiteral_1377);
    DAT_04568e6b = 1;
    method = extraout_x1;
  }
  local_38 = 0;
  local_3c = 0;
  pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar3 == (IFFFKKMMKFO_o *)0x0) goto LAB_036ae464;
  fVar10 = (pIVar3->fields).JOAHABGBLEF;
  CJNHFNHJHPE = -0x8000000000000000;
  if (fVar10 != INFINITY) {
    CJNHFNHJHPE = (long)fVar10;
  }
  if (1e+06 <= fVar10) {
    local_38 = CJNHFNHJHPE / 1000000;
    str0 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
    local_3c = ((int)CJNHFNHJHPE % 1000000) / 100000;
    pSVar1 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
    puVar6 = &StringLiteral_8705;
LAB_036ae3b0:
    pSVar1 = System_String__Concat
                       (str0,StringLiteral_1377,pSVar1,(System_String_o *)*puVar6,(MethodInfo *)0x0)
    ;
  }
  else {
    if (100000.0 <= fVar10) {
      local_38 = CJNHFNHJHPE / 1000;
      str0 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
      lVar5 = (long)(int)fVar10 * 0x10624dd3;
      local_3c = -6;
      if (fVar10 != INFINITY) {
        local_3c = (int)(short)((short)(int)fVar10 +
                               ((short)(uint)((ulong)lVar5 >> 0x26) - (short)(lVar5 >> 0x3f)) *
                               -1000) / 100;
      }
      pSVar1 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
      puVar6 = &StringLiteral_8188;
      goto LAB_036ae3b0;
    }
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
    }
    pSVar1 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._damage;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (pIVar3 != (IFFFKKMMKFO_o *)0x0) {
      fVar11 = (pIVar3->fields).ECNFDCBBAEN;
      fVar10 = (pIVar3->fields).JOAHABGBLEF;
      pNVar2 = (__this->fields)._damage;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
      if (fVar11 <= fVar10) {
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pNVar7 = pNVar2->klass;
          fVar8 = (pBVar4->FHIAKPJBBCB).fields.b;
          fVar9 = (pBVar4->FHIAKPJBBCB).fields.a;
          fVar10 = (pBVar4->FHIAKPJBBCB).fields.r;
          fVar11 = (pBVar4->FHIAKPJBBCB).fields.g;
          goto LAB_036ae438;
        }
      }
      else if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pNVar7 = pNVar2->klass;
        fVar8 = (pBVar4->LMIPLAFCFBL).fields.b;
        fVar9 = (pBVar4->LMIPLAFCFBL).fields.a;
        fVar10 = (pBVar4->LMIPLAFCFBL).fields.r;
        fVar11 = (pBVar4->LMIPLAFCFBL).fields.g;
LAB_036ae438:
        (*(pNVar7->vtable)._23_set_color.methodPtr)
                  (fVar10,fVar11,fVar8,fVar9,pNVar2,(pNVar7->vtable)._23_set_color.method);
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__GINCEPGBOIC(__this,method_00);
        return;
      }
    }
  }
LAB_036ae464:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

