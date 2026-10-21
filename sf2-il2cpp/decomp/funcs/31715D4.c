// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch.IGJBOHBBNFF$$MoveNext @ RVA 0x31715D4

bool Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_IGJBOHBBNFF__MoveNext
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_IGJBOHBBNFF_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppObject **ppIVar5;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this_01;
  UnityEngine_UI_Image_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 in_d1;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_d2;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456692a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456692a = 1;
    method = extraout_x1;
  }
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 2) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)
    goto LAB_032719e0;
    if ((__this_01->fields).CEPACCGIINO != false) {
      if ((__this_01->fields).CPIJELCNKJA != false) {
        pNVar3 = (__this_01->fields)._IconReadyImage;
        if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032719e0;
        uVar10 = (*(pNVar3->klass->vtable)._22_get_color.methodPtr)
                           (pNVar3,(pNVar3->klass->vtable)._22_get_color.method);
        fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        pNVar3 = (__this_01->fields)._IconReadyImage;
        if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032719e0;
        fVar7 = fVar7 * 8.0;
        fVar8 = sinf(fVar7 + (__this_01->fields)._PulseOffset + 0.5);
        (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                  (uVar10,in_d1,in_d2,(ulong)(uint)((1.0 - ABS(fVar8 * 0.5 + 0.5)) * 0.8 + 0.2),
                   pNVar3,(pNVar3->klass->vtable)._23_set_color.method);
        fVar8 = sinf(fVar7 * 0.5 + (__this_01->fields)._PulseOffset);
        if (DAT_0455fa7e == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa7e = '\x01';
        }
        fVar9 = (__this_01->fields).ADHJEOCGNDN * 0.5;
        fVar21 = fVar9;
        if (1.0 < fVar9) {
          fVar21 = 1.0;
        }
        if (fVar9 < 0.0) {
          fVar21 = 0.0;
        }
        fVar19 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x;
        fVar20 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y;
        fVar9 = fVar21 * fVar21 * 3.0 - fVar21 * fVar21 * (fVar21 + fVar21);
        fVar21 = fVar9;
        if (1.0 < fVar9) {
          fVar21 = 1.0;
        }
        if (fVar9 < 0.0) {
          fVar21 = 0.0;
        }
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_032719e0;
        fVar8 = ((1.0 - ABS(fVar8)) * 0.1 + 0.9 + -1.0) * fVar21 + 1.0;
        UVar22.fields.y = fVar20 * fVar8;
        UVar22.fields.x = fVar19 * fVar8;
        UVar22.fields.z = 0.0;
        UnityEngine_Transform__set_localScale(pUVar4,UVar22,(MethodInfo *)0x0);
        pNVar3 = (__this_01->fields)._FillImage;
        if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032719e0;
        uVar13 = (__this_01->fields)._FillHightLightColor.fields.b;
        uVar14 = (__this_01->fields)._FillHightLightColor.fields.a;
        uVar11 = (__this_01->fields)._FillHightLightColor.fields.r;
        uVar12 = (__this_01->fields)._FillHightLightColor.fields.g;
        fVar7 = sinf(fVar7 + (__this_01->fields)._PulseOffset);
        uVar17 = (__this_01->fields).PNDDALIFKEK.fields.b;
        uVar18 = (__this_01->fields).PNDDALIFKEK.fields.a;
        uVar15 = (__this_01->fields).PNDDALIFKEK.fields.r;
        uVar16 = (__this_01->fields).PNDDALIFKEK.fields.g;
        fVar7 = fVar7 * 0.5 + 0.5;
        fVar8 = (float)uVar12 + ((float)uVar16 - (float)uVar12) * fVar7;
        (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                  (CONCAT44(fVar8,(float)uVar11 + ((float)uVar15 - (float)uVar11) * fVar7),
                   (ulong)(uint)fVar8,
                   (ulong)(uint)((float)uVar13 + ((float)uVar17 - (float)uVar13) * fVar7),
                   (ulong)(uint)((float)uVar14 + ((float)uVar18 - (float)uVar14) * fVar7),pNVar3,
                   (pNVar3->klass->vtable)._23_set_color.method);
        method = extraout_x1_00;
      }
      pUVar6 = (__this_01->fields).JDDOPDPMFGJ;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pUVar6 = (__this_01->fields).JDDOPDPMFGJ;
        if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto LAB_032719e0;
        bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          ((UnityEngine_Behaviour_o *)pUVar6,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar6 = (__this_01->fields).JDDOPDPMFGJ;
          if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto LAB_032719e0;
          fVar7 = (__this_01->fields).ADHJEOCGNDN / 2.5;
          if (1.0 <= fVar7) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_032719e0;
            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
          }
          else {
            (*(pUVar6->klass->vtable)._22_get_color.methodPtr)
                      (pUVar6,(pUVar6->klass->vtable)._22_get_color.method);
            fVar8 = fVar7;
            if (1.0 < fVar7) {
              fVar8 = 1.0;
            }
            if (fVar7 < 0.0) {
              fVar8 = 0.0;
            }
            pUVar6 = (__this_01->fields).JDDOPDPMFGJ;
            fVar8 = fVar8 * fVar8 * 3.0 - fVar8 * fVar8 * (fVar8 + fVar8);
            fVar7 = fVar8;
            if (1.0 < fVar8) {
              fVar7 = 1.0;
            }
            if (fVar8 < 0.0) {
              fVar7 = 0.0;
            }
            if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) {
LAB_032719e0:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                      (pUVar6,(pUVar6->klass->vtable)._23_set_color.method);
            if (DAT_0455fa7e == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa7e = '\x01';
            }
            fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x;
            fVar21 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y;
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_032719e0;
            UVar22 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
            pUVar6 = (__this_01->fields).JDDOPDPMFGJ;
            if ((pUVar6 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_032719e0;
            fVar7 = fVar7 + fVar7 + 1.0;
            value.fields.x = (fVar7 * fVar8) / UVar22.fields.x;
            value.fields.y = (fVar7 * fVar21) / UVar22.fields.x;
            value.fields.z = 0.0;
            UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
          }
        }
      }
    }
    fVar8 = (__this_01->fields).ADHJEOCGNDN;
    fVar7 = UnityEngine_Time__get_smoothDeltaTime((MethodInfo *)0x0);
    (__this_01->fields).ADHJEOCGNDN = fVar8 + fVar7 * 6.0;
    ppIVar5 = &(__this->fields).__2__current;
    *ppIVar5 = (Il2CppObject *)0x0;
    thunk_FUN_01c20e04(ppIVar5,0);
    (__this->fields).__1__state = 1;
  }
  return uVar1 < 2;
}

