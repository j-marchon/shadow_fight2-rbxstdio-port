// Nekki.SF2.GUI.Dialogs.BaseDialog$$GLJGIJNALCA @ RVA 0x33AE9C4

/* WARNING: Removing unreachable block (ram,0x034aedc8) */

void Nekki_SF2_GUI_Dialogs_BaseDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  bool bVar5;
  int32_t iVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_IEnumerator_o *pSVar9;
  VirtualInvokeData *pVVar10;
  UnityEngine_Component_o *__this_00;
  UnityEngine_RectTransform_o *pUVar11;
  Il2CppObject *pIVar12;
  long *plVar13;
  undefined8 *puVar14;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  UnityEngine_Object_o *pUVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Rect_o UVar28;
  
  if ((DAT_04567d33 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Text>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_04567d33 = 1;
    method = extraout_x1;
  }
  pUVar20 = (UnityEngine_Object_o *)(__this->fields)._content;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
                    /* try { // try from 034aed8c to 035aed93 has its CatchHandler @ 034af918 */
                    /* try { // try from 034aeda0 to 035aeda3 has its CatchHandler @ 034af914 */
    return;
  }
  pUVar7 = (__this->fields)._content;
  if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    iVar6 = UnityEngine_Transform__get_childCount(pUVar8,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      return;
    }
    pUVar7 = (__this->fields)._content;
    if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      pSVar9 = UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
      fVar25 = 0.0;
      fVar24 = 0.0;
      do {
        if (pSVar9 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar15 = pSVar9->klass;
        uVar2._0_1_ = (pSVar15->_2).rank;
        uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar2;
        if (uVar17 != 0) {
          piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar10 = pSVar15->vtable + *piVar18;
              goto LAB_034aeb34;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
                    /* try { // try from 034aeb1c to 035aeb43 has its CatchHandler @ 034af95c */
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034aeb34:
        uVar17 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
        if ((uVar17 & 1) == 0) {
                    /* try { // try from 034aecb4 to 035aecbb has its CatchHandler @ 034af928 */
          auVar26 = thunk_FUN_01bda71c(pSVar9,System_IDisposable_TypeInfo);
          method_00 = auVar26._8_8_;
          plVar13 = auVar26._0_8_;
          if (plVar13 == (long *)0x0) goto LAB_034aed24;
          lVar16 = *plVar13;
                    /* try { // try from 034aeccc to 035aecd3 has its CatchHandler @ 034af924 */
                    /* try { // try from 034aecd4 to 035aecdf has its CatchHandler @ 034af91c */
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 == 0) goto LAB_034aecfc;
                    /* try { // try from 034aece0 to 035aecf7 has its CatchHandler @ 034af944 */
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_034aece4;
        }
        pSVar15 = pSVar9->klass;
        uVar3._0_1_ = (pSVar15->_2).rank;
        uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar3;
        if (uVar17 != 0) {
          piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar10 = pSVar15->vtable + (*piVar18 + 1);
              goto LAB_034aeb94;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
                    /* try { // try from 034aeb78 to 035aeba3 has its CatchHandler @ 034af958 */
        pVVar10 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034aeb94:
        __this_00 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pSVar9,pVVar10->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
                    /* try { // try from 034aebd8 to 035aebe3 has its CatchHandler @ 034af950 */
        pUVar8 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar27 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
        fVar23 = UVar27.fields.y;
                    /* try { // try from 034aebf4 to 035aebfb has its CatchHandler @ 034af940 */
        pUVar8 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 034aec00 to 035aec07 has its CatchHandler @ 034af938 */
        UVar27 = UnityEngine_Transform__get_localScale(pUVar8,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent<object>
                            (__this_00,Method_UnityEngine_Component_GetComponent<RectTransform>__);
                    /* try { // try from 034aec18 to 035aec27 has its CatchHandler @ 034af92c */
        if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar28 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
        fVar21 = UVar28.fields.m_Height;
        pUVar20 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent<object>
                            (__this_00,Method_UnityEngine_Component_GetComponent<Text>__);
                    /* try { // try from 034aec34 to 035aec3b has its CatchHandler @ 034af910 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034aec4c to 035aec53 has its CatchHandler @ 034af90c */
                    /* try { // try from 034aec54 to 035aec5f has its CatchHandler @ 034af8ec */
        bVar5 = UnityEngine_Object__op_Inequality
                          (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pIVar12 = UnityEngine_Component__GetComponent<object>
                              (__this_00,Method_UnityEngine_Component_GetComponent<Text>__);
          if (pIVar12 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 034aec74 to 035aec7b has its CatchHandler @ 034af8e4 */
          fVar21 = (float)(*pIVar12->klass->vtable[0x52].methodPtr)
                                    (pIVar12,pIVar12->klass->vtable[0x52].method);
        }
        fVar21 = fVar21 * 0.5;
                    /* try { // try from 034aec84 to 035aec8b has its CatchHandler @ 034af8e0 */
        fVar22 = UVar27.fields.y * fVar21;
                    /* try { // try from 034aec8c to 035aeca7 has its CatchHandler @ 034af93c */
        fVar4 = fVar23 + fVar22;
        if (fVar23 + fVar21 <= fVar24) {
          fVar4 = fVar24;
        }
        fVar24 = fVar4;
        if (fVar23 - fVar21 < fVar25) {
          fVar25 = fVar23 - fVar22;
        }
      } while( true );
    }
  }
  goto LAB_034aedc4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_034aece4:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_034aed18;
    }
  }
LAB_034aecfc:
                    /* try { // try from 034aed04 to 035aed0b has its CatchHandler @ 034af908 */
  puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_034aed18:
                    /* try { // try from 034aed1c to 035aed23 has its CatchHandler @ 034af8e8 */
  (*(code *)*puVar14)(plVar13,puVar14[1]);
  method_00 = extraout_x1_00;
LAB_034aed24:
                    /* try { // try from 034aed24 to 035aed3f has its CatchHandler @ 034af930 */
  pUVar11 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO(__this,method_00);
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    UVar28 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
    fVar23 = -fVar24;
    if (0.0 <= fVar24) {
      fVar23 = fVar24;
    }
                    /* try { // try from 034aed4c to 035aed6f has its CatchHandler @ 034af94c */
    fVar24 = -fVar25;
    if (0.0 <= fVar25) {
      fVar24 = fVar25;
    }
    if (fVar23 <= fVar24) {
      fVar23 = fVar24;
    }
    pUVar11 = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO(__this,method_01);
    if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar23 + fVar23;
      value.fields.x = UVar28.fields.m_Width;
                    /* try { // try from 034aed74 to 035aed7f has its CatchHandler @ 034af920 */
      UnityEngine_RectTransform__set_sizeDelta(pUVar11,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_034aedc4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

