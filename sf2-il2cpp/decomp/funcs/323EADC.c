// Nekki.SF2.GUI.SFScrollRect$$LateUpdate @ RVA 0x323EADC

/* WARNING: Removing unreachable block (ram,0x0333ee68) */

void Nekki_SF2_GUI_SFScrollRect__LateUpdate(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  long lVar1;
  int iVar2;
  UnityEngine_Bounds_o *pUVar3;
  bool bVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1_08;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_09;
  MethodInfo *extraout_x1_10;
  MethodInfo *extraout_x1_11;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *extraout_x1_12;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar13;
  undefined4 extraout_var_00;
  UnityEngine_Vector2_Fields UVar14;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar15;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  UnityEngine_Vector2_Fields UVar36;
  UnityEngine_Vector2_o UVar37;
  UnityEngine_Vector2_o UVar38;
  UnityEngine_Vector2_o arg0;
  float local_84;
  ulong uVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_01;
  ulong uVar22;
  
  if ((DAT_04567079 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    DAT_04567079 = 1;
    method = extraout_x1;
  }
  local_84 = 0.0;
  pUVar6 = (__this->fields).m_Content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI(__this,method_00);
  Nekki_SF2_GUI_SFScrollRect__JMLCAJLBDEK(__this,method_01);
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_02);
  fVar7 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  pMVar5 = extraout_x1_00;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    pMVar5 = extraout_x1_01;
  }
  UVar37 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE
                     (__this,(UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,pMVar5
                     );
  fVar16 = UVar37.fields.y;
  uVar22 = (ulong)(uint)fVar16;
  fVar9 = UVar37.fields.x;
  uVar12 = (ulong)UVar37.fields & 0xffffffff;
  pMVar5 = extraout_x1_02;
  if ((__this->fields).EKGCFOHOBKN == false) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
      pMVar5 = extraout_x1_03;
    }
    fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar19 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
    fVar26 = fVar9 - fVar8;
    fVar27 = fVar16 - fVar19;
    if (((9.9999994e-11 <= fVar26 * fVar26 + fVar27 * fVar27) ||
        (fVar8 = (__this->fields).CDHNBOKGCCN.fields.x - fVar8,
        fVar19 = (__this->fields).CDHNBOKGCCN.fields.y - fVar19,
        9.9999994e-11 <= fVar8 * fVar8 + fVar19 * fVar19)) &&
       (uVar23 = 0, (__this->fields).m_MovementType != 3)) {
      pUVar6 = (__this->fields).m_Content;
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
        uVar15 = CONCAT44(uVar23,UVar37.fields.y);
        uVar13 = CONCAT44(extraout_var,UVar37.fields.x);
        bVar4 = true;
        pMVar5 = extraout_x1_04;
LAB_0333ec78:
        do {
          iVar2 = (__this->fields).m_MovementType;
          while( true ) {
            fVar8 = fVar9;
            if (!bVar4) {
              fVar8 = fVar16;
            }
            fVar19 = (float)uVar13;
            if ((iVar2 == 1) && (fVar8 != 0.0)) {
              lVar1 = 0xb8;
              if (!bVar4) {
                lVar1 = 0xbc;
              }
              local_84 = *(float *)((long)&__this->klass + lVar1);
              pUVar6 = (__this->fields).m_Content;
              if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
              UVar38 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).m_Content;
              fVar8 = UVar38.fields.x;
              if (!bVar4) {
                fVar8 = UVar38.fields.y;
              }
              if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
              UVar38 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
              if (bVar4) {
                fVar8 = UnityEngine_Mathf__SmoothDamp
                                  (fVar8,fVar9 + UVar38.fields.x,&local_84,
                                   (__this->fields).m_Elasticity,INFINITY,fVar7,(MethodInfo *)0x0);
                uVar13 = CONCAT44(extraout_var_00,fVar8);
                bVar4 = false;
                (__this->fields).CDHNBOKGCCN.fields.x = local_84;
                pMVar5 = extraout_x1_05;
                goto LAB_0333ec78;
              }
              fVar9 = UnityEngine_Mathf__SmoothDamp
                                (fVar8,fVar16 + UVar38.fields.y,&local_84,
                                 (__this->fields).m_Elasticity,INFINITY,fVar7,(MethodInfo *)0x0);
              uVar15 = CONCAT44(extraout_var_01,fVar9);
              (__this->fields).CDHNBOKGCCN.fields.y = local_84;
              pMVar5 = extraout_x1_12;
              goto LAB_0333ed90;
            }
            if ((__this->fields).m_Inertia != false) break;
            if (!bVar4) {
              (__this->fields).CDHNBOKGCCN.fields.y = 0.0;
              goto LAB_0333ed90;
            }
            bVar4 = false;
            (__this->fields).CDHNBOKGCCN.fields.x = 0.0;
          }
          if (bVar4) {
            fVar26 = (__this->fields).CDHNBOKGCCN.fields.x;
            fVar8 = powf((__this->fields).m_DecelerationRate,fVar7);
            fVar26 = fVar26 * fVar8;
            (__this->fields).CDHNBOKGCCN.fields.x = fVar26;
            pMVar5 = extraout_x1_06;
          }
          else {
            fVar26 = (__this->fields).CDHNBOKGCCN.fields.y;
            fVar8 = powf((__this->fields).m_DecelerationRate,fVar7);
            fVar26 = fVar26 * fVar8;
            (__this->fields).CDHNBOKGCCN.fields.y = fVar26;
            pMVar5 = extraout_x1_07;
          }
          if (ABS(fVar26) < 1.0) {
            if (bVar4) {
              (__this->fields).CDHNBOKGCCN.fields.x = 0.0;
              fVar8 = 0.0;
              goto LAB_0333ed78;
            }
            fVar9 = 0.0;
            (__this->fields).CDHNBOKGCCN.fields.y = 0.0;
LAB_0333f054:
            uVar15 = (ulong)(uint)(UVar37.fields.y + fVar7 * fVar9);
LAB_0333ed90:
            UVar36 = (__this->fields).CDHNBOKGCCN.fields;
            if (DAT_0455fa75 == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa75 = '\x01';
              pMVar5 = extraout_x1_08;
            }
            UVar14 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
            fVar9 = UVar36.x - UVar14.x;
            fVar16 = UVar36.y - UVar14.y;
            if (9.9999994e-11 <= fVar9 * fVar9 + fVar16 * fVar16) {
              if ((__this->fields).m_MovementType == 2) {
                pUVar6 = (__this->fields).m_Content;
                if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) break;
                UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
                UVar38.fields.x = fVar19 - UVar37.fields.x;
                UVar38.fields.y = (float)uVar15 - UVar37.fields.y;
                UVar37 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE(__this,UVar38,method_03);
                uVar22 = (ulong)UVar37.fields >> 0x20;
                uVar12 = (ulong)UVar37.fields & 0xffffffff;
                uVar13 = (ulong)(uint)(fVar19 + UVar37.fields.x);
                uVar15 = (ulong)(uint)((float)uVar15 + UVar37.fields.y);
              }
              (*(__this->klass->vtable)._48_DJJKCEKMACC.methodPtr)
                        (uVar13,uVar15,__this,(__this->klass->vtable)._48_DJJKCEKMACC.method);
              pMVar5 = extraout_x1_09;
            }
            goto LAB_0333ee28;
          }
          if (!bVar4) {
            fVar9 = (__this->fields).CDHNBOKGCCN.fields.y;
            goto LAB_0333f054;
          }
          fVar8 = (__this->fields).CDHNBOKGCCN.fields.x;
LAB_0333ed78:
          bVar4 = false;
          uVar13 = (ulong)(uint)(fVar19 + fVar7 * fVar8);
        } while( true );
      }
      goto LAB_0333f064;
    }
LAB_0333ee28:
    if ((__this->fields).EKGCFOHOBKN != false) goto LAB_0333ee30;
  }
  else {
LAB_0333ee30:
    if ((__this->fields).m_Inertia != false) {
      pUVar6 = (__this->fields).m_Content;
      if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
      UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
      UVar36 = (__this->fields).EADEAEOKIOJ.fields;
      UVar14 = (__this->fields).CDHNBOKGCCN.fields;
      fVar9 = fVar7 * 10.0;
      if (fVar7 * 10.0 < 0.0) {
        fVar9 = 0.0;
      }
      fVar16 = UVar14.x;
      fVar8 = UVar14.y;
      UVar14.x = fVar16 + ((UVar37.fields.x - UVar36.x) / fVar7 - fVar16) * fVar9;
      UVar14.y = fVar8 + ((UVar37.fields.y - UVar36.y) / fVar7 - fVar8) * fVar9;
      (__this->fields).CDHNBOKGCCN.fields = UVar14;
      pMVar5 = extraout_x1_10;
    }
  }
  pUVar3 = &(__this->fields).JOKCKGCCNNP;
  uVar20 = (pUVar3->fields).m_Center.fields.y;
  uVar24 = (pUVar3->fields).m_Center.fields.z;
  pUVar3 = &(__this->fields).NMKFBEKICHJ;
  uVar28 = (pUVar3->fields).m_Center.fields.y;
  uVar32 = (pUVar3->fields).m_Center.fields.z;
  fVar7 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x -
          (__this->fields).NMKFBEKICHJ.fields.m_Center.fields.x;
  if (((((float)uVar24 - (float)uVar32) * ((float)uVar24 - (float)uVar32) +
        fVar7 * fVar7 + ((float)uVar20 - (float)uVar28) * ((float)uVar20 - (float)uVar28) <
        9.9999994e-11) &&
      (pUVar3 = &(__this->fields).NMKFBEKICHJ, uVar10 = (pUVar3->fields).m_Extents.fields.y,
      uVar17 = (pUVar3->fields).m_Extents.fields.z, pUVar3 = &(__this->fields).JOKCKGCCNNP,
      uVar29 = (pUVar3->fields).m_Extents.fields.y, uVar33 = (pUVar3->fields).m_Extents.fields.z,
      fVar7 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x -
              (__this->fields).NMKFBEKICHJ.fields.m_Extents.fields.x,
      ((float)uVar33 - (float)uVar17) * ((float)uVar33 - (float)uVar17) +
      ((float)uVar29 - (float)uVar10) * ((float)uVar29 - (float)uVar10) + fVar7 * fVar7 <
      9.9999994e-11)) &&
     ((pUVar3 = &(__this->fields).GOOOAGHGBPJ, uVar21 = (pUVar3->fields).m_Center.fields.y,
      uVar25 = (pUVar3->fields).m_Center.fields.z, pUVar3 = &(__this->fields).EKELFALKAAL,
      uVar30 = (pUVar3->fields).m_Center.fields.y, uVar34 = (pUVar3->fields).m_Center.fields.z,
      fVar7 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x -
              (__this->fields).EKELFALKAAL.fields.m_Center.fields.x,
      ((float)uVar25 - (float)uVar34) * ((float)uVar25 - (float)uVar34) +
      fVar7 * fVar7 + ((float)uVar21 - (float)uVar30) * ((float)uVar21 - (float)uVar30) <
      9.9999994e-11 &&
      (pUVar3 = &(__this->fields).EKELFALKAAL, uVar11 = (pUVar3->fields).m_Extents.fields.y,
      uVar18 = (pUVar3->fields).m_Extents.fields.z, pUVar3 = &(__this->fields).GOOOAGHGBPJ,
      uVar31 = (pUVar3->fields).m_Extents.fields.y, uVar35 = (pUVar3->fields).m_Extents.fields.z,
      fVar7 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x -
              (__this->fields).EKELFALKAAL.fields.m_Extents.fields.x,
      ((float)uVar35 - (float)uVar18) * ((float)uVar35 - (float)uVar18) +
      ((float)uVar31 - (float)uVar11) * ((float)uVar31 - (float)uVar11) + fVar7 * fVar7 <
      9.9999994e-11)))) {
    pUVar6 = (__this->fields).m_Content;
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333f064;
    UVar37 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
    fVar7 = UVar37.fields.x - (__this->fields).EADEAEOKIOJ.fields.x;
    fVar9 = UVar37.fields.y - (__this->fields).EADEAEOKIOJ.fields.y;
    pMVar5 = extraout_x1_11;
    if (fVar7 * fVar7 + fVar9 * fVar9 < 9.9999994e-11) {
      return;
    }
  }
  UVar37.fields.x = (float)uVar12;
  UVar37.fields.y = (float)uVar22;
  Nekki_SF2_GUI_SFScrollRect__HIFNCLLMJOJ(__this,UVar37,pMVar5);
  __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)(__this->fields).m_OnValueChanged;
  arg0.fields.x = Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition(__this,method_04);
  fVar7 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition(__this,method_05);
  if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
    arg0.fields.y = fVar7;
    UnityEngine_Events_UnityEvent<Vector2>__Invoke
              (__this_00,arg0,Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    Nekki_SF2_GUI_SFScrollRect__FEIGMHLBIOI(__this,method_06);
    return;
  }
LAB_0333f064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

