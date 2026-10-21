// Nekki.SF2.GUI.SFScrollRect$$HGJHFCMDKKP @ RVA 0x323CC38

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__HGJHFCMDKKP
               (Nekki_SF2_GUI_SFScrollRect_o *__this,float CJNHFNHJHPE,int32_t DENMNGGNCLF,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *pSVar2;
  undefined *puVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Bounds_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector2_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  float fVar11;
  
  Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI(__this,(MethodInfo *)(ulong)(uint)DENMNGGNCLF);
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
  if (DENMNGGNCLF == 2) {
    fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z;
    fVar14 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.z;
    pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).JOKCKGCCNNP.fields.m_Center.fields.z;
LAB_0333cca8:
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333ce34;
    fVar15 = (pUVar5->fields).m_Center.fields.x;
    UVar18 = UnityEngine_Transform__get_localPosition
                       ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
    fVar11 = UVar18.fields.z;
    if (DENMNGGNCLF == 2) {
      pUVar6 = (UnityEngine_Vector3_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.z;
      pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.z;
    }
    else if (DENMNGGNCLF == 1) {
      pUVar6 = (UnityEngine_Vector3_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
      pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y;
      fVar11 = UVar18.fields.y;
    }
    else {
      if (DENMNGGNCLF != 0) goto LAB_0333ce38;
      pUVar6 = &(__this->fields).GOOOAGHGBPJ.fields.m_Extents;
      pUVar5 = &(__this->fields).GOOOAGHGBPJ;
      fVar11 = UVar18.fields.x;
    }
    pUVar1 = (__this->fields).m_Content;
    if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
LAB_0333ce34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar16 = (pUVar5->fields).m_Center.fields.x;
    fVar17 = (pUVar6->fields).x;
    UVar18 = UnityEngine_Transform__get_localPosition
                       ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
    fVar12 = UVar18.fields.z;
    fVar10 = UVar18.fields.y;
    fVar9 = UVar18.fields.x;
    fVar13 = fVar9;
    if (((DENMNGGNCLF == 0) || (fVar13 = fVar12, DENMNGGNCLF == 2)) ||
       (fVar13 = fVar10, DENMNGGNCLF == 1)) {
      fVar8 = (((fVar15 - fVar14) - ((fVar8 + fVar8) - (fVar14 + fVar14)) * CJNHFNHJHPE) + fVar11) -
              (fVar16 - fVar17);
      if (ABS(fVar13 - fVar8) <= 0.01) {
        return;
      }
      fVar14 = fVar8;
      fVar11 = fVar12;
      if (((DENMNGGNCLF == 0) || (fVar14 = fVar9, fVar11 = fVar8, DENMNGGNCLF == 2)) ||
         (fVar10 = fVar8, fVar11 = fVar12, DENMNGGNCLF == 1)) {
        pUVar1 = (__this->fields).m_Content;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar18.fields.y = fVar10;
          UVar18.fields.x = fVar14;
          UVar18.fields.z = fVar11;
          UnityEngine_Transform__set_localPosition
                    ((UnityEngine_Transform_o *)pUVar1,UVar18,(MethodInfo *)0x0);
          if (DENMNGGNCLF == 1) {
            pUVar7 = (UnityEngine_Vector2_o *)&(__this->fields).CDHNBOKGCCN.fields.y;
          }
          else {
            if (DENMNGGNCLF != 0) {
              thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
              __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
              pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
              System_IndexOutOfRangeException___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
              puVar3 = &Method_UnityEngine_Vector2_set_Item__;
              goto LAB_0333ce70;
            }
            pUVar7 = &(__this->fields).CDHNBOKGCCN;
          }
          (pUVar7->fields).x = 0.0;
          Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_01);
          return;
        }
        goto LAB_0333ce34;
      }
      thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
      __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
      pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707);
      System_IndexOutOfRangeException___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
      puVar3 = &Method_UnityEngine_Vector3_set_Item__;
      goto LAB_0333ce70;
    }
  }
  else {
    if (DENMNGGNCLF == 1) {
      fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
      fVar14 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
      pUVar5 = (UnityEngine_Bounds_o *)&(__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y;
      goto LAB_0333cca8;
    }
    if (DENMNGGNCLF == 0) {
      fVar8 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
      fVar14 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
      pUVar5 = &(__this->fields).JOKCKGCCNNP;
      goto LAB_0333cca8;
    }
  }
LAB_0333ce38:
  thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
  __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
  pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707);
  System_IndexOutOfRangeException___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
  puVar3 = &Method_UnityEngine_Vector3_get_Item__;
LAB_0333ce70:
  uVar4 = thunk_FUN_01bb9178(puVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar4);
}

