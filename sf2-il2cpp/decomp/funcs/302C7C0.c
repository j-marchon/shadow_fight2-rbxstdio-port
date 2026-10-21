// Nekki.SF2.GUI.SimpleScroll$$CIPFHAIEHPM @ RVA 0x302C7C0

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__CIPFHAIEHPM(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  UnityEngine_Vector2_c *pUVar4;
  bool bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *pUVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields UVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  undefined8 in_d1;
  float fVar12;
  float fVar13;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Rect_o UVar15;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565ccf & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
                    /* try { // try from 0312c7f4 to 0322c803 has its CatchHandler @ 0312c804 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
                    /* catch() { ... } // from try @ 0312c774 with catch @ 0312c804
                       catch() { ... } // from try @ 0312c7f4 with catch @ 0312c804 */
                    /* try { // try from 0312c808 to 0322c80b has its CatchHandler @ 0312c814 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
                    /* try { // try from 0312c80c to 0322c817 has its CatchHandler @ 0312c6a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0312c808 with catch @ 0312c814
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_04565ccf = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo,method);
    DAT_0455fa75 = '\x01';
  }
  *(UnityEngine_Vector2_Fields *)&(__this->fields).GCNFFAAPOKE =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  bVar5 = DJNBJHPDKDP__OBECCOPBADO<object>
                    (*(System_Collections_Generic_List_T__o **)&(__this->fields)._snapEase,
                     Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar13 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  fVar12 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if (bVar5) goto LAB_0312ca78;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar5) {
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar11 = (float)(*(local_70.fields._current)->klass->vtable[0x33].methodPtr)
                                (local_70.fields._current,
                                 (local_70.fields._current)->klass->vtable[0x33].method);
      fVar13 = fVar13 + fVar11;
      fVar12 = fVar12 + (float)in_d1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    UVar7 = (__this->fields).GNMNFMOHDMG.fields;
    if (UVar7 == (UnityEngine_Vector2_Fields)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((long)UVar7 + 0x18);
    }
    lVar8 = *(long *)&(__this->fields)._snapEase;
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      if (DAT_0455fa7e == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa7e = '\x01';
      }
      pUVar4 = UnityEngine_Vector2_TypeInfo;
      lVar8 = *(long *)&(__this->fields).ANKHPKGAHCA;
      if (lVar8 != 0) {
        fVar11 = (float)(iVar1 + -1);
                    /* try { // try from 0312c9a0 to 0322c9e7 has its CatchHandler @ 0312c9a0
                       catch() { ... } // from try @ 0312c9a0 with catch @ 0312c9a0
                       catch() { ... } // from try @ 0312c9f8 with catch @ 0312c9a0
                       catch() { ... } // from try @ 0312ca8c with catch @ 0312c9a0
                       catch() { ... } // from try @ 0312cb0c with catch @ 0312c9a0 */
        fVar13 = fVar13 + (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x * fVar11
                          * *(float *)(lVar8 + 0x60);
        fVar12 = fVar12 + (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y * fVar11
                          * *(float *)(lVar8 + 0x60);
        *(float *)&(__this->fields).GCNFFAAPOKE = fVar13;
        *(float *)&(__this->fields).field_0x1a4 = fVar12;
        fVar13 = fVar13 + (pUVar4->static_fields->oneVector).fields.x * (float)iVar9 *
                          *(float *)(lVar8 + 0x60);
        fVar12 = fVar12 + (pUVar4->static_fields->oneVector).fields.y * (float)iVar9 *
                          *(float *)(lVar8 + 0x60);
        if (iVar9 != 2) {
LAB_0312ca78:
          UVar14.fields.y = fVar12;
          UVar14.fields.x = fVar13;
                    /* try { // try from 0312ca8c to 0322caf3 has its CatchHandler @ 0312c9a0 */
          return (UnityEngine_Vector2_o)UVar14.fields;
        }
                    /* try { // try from 0312c9e8 to 0322c9eb has its CatchHandler @ 0312ca58 */
        pUVar6 = (__this->fields).super.m_Viewport;
                    /* try { // try from 0312c9ec to 0322c9f7 has its CatchHandler @ 0312ca5c */
        if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
          UVar15 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
                    /* try { // try from 0312c9f8 to 0322ca73 has its CatchHandler @ 0312c9a0 */
          UVar7 = (__this->fields).GNMNFMOHDMG.fields;
          fVar11 = UVar15.fields.m_Width;
          if ((__this->fields).super.m_Horizontal != false) {
            fVar11 = UVar15.fields.m_Width * 4.0;
          }
          fVar3 = UVar15.fields.m_Height;
          if ((__this->fields).super.m_Vertical != false) {
            fVar3 = UVar15.fields.m_Height * 4.0;
          }
          if (UVar7 != (UnityEngine_Vector2_Fields)0x0) {
            uVar2 = *(uint *)((long)UVar7 + 0x18);
            method_00 = extraout_x1_00;
            if (0 < (int)uVar2) {
              uVar10 = 0;
              do {
                if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                pUVar6 = *(UnityEngine_RectTransform_o **)
                          ((long)UVar7 + (long)(int)uVar10 * 8 + 0x20);
                if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312caa0;
                value.fields.y = fVar3;
                value.fields.x = fVar11;
                UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c9e8 with catch @ 0312ca58
                        */
                uVar2 = *(uint *)((long)UVar7 + 0x18);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312c9ec with catch @ 0312ca5c
                        */
                uVar10 = uVar10 + 1;
                fVar13 = fVar11 + fVar13;
                fVar12 = fVar3 + fVar12;
                method_00 = extraout_x1_01;
              } while ((int)uVar10 < (int)uVar2);
            }
                    /* try { // try from 0312ca74 to 0322ca8b has its CatchHandler @ 0312cb04 */
            Nekki_SF2_GUI_SimpleScroll__POHJDOKIPBD(__this,method_00);
            goto LAB_0312ca78;
          }
        }
      }
    }
  }
LAB_0312caa0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

