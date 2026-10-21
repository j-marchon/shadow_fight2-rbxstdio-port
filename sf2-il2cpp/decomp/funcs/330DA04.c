// GIAMPEGMNHE$$JHLNBAHDGPI @ RVA 0x330DA04

System_Nullable_Vector2__o
GIAMPEGMNHE__JHLNBAHDGPI(System_Xml_XmlAttribute_o *LBJNDMNEJJB,MethodInfo *method)

{
  uint uVar1;
  System_Nullable_Vector2__Fields SVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Char_array *separator;
  System_String_array *pSVar5;
  long lVar6;
  undefined8 *puVar7;
  MethodInfo_27FC874 *method_00;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  System_Nullable_Vector2__o __this;
  UnityEngine_Vector2_Fields local_58;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_04567799 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_8BC5AA4321387997B5D86EDA80E56B6BE2547A9E5797DF383BF1107BA47DF6A4
                );
    DAT_04567799 = 1;
  }
  local_58.x = 0.0;
  local_58.y = 0.0;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,4);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)separator,
               Field_<PrivateImplementationDetails>_8BC5AA4321387997B5D86EDA80E56B6BE2547A9E5797DF383BF1107BA47DF6A4
               ,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_o *)0x0) {
LAB_0340dc68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = System_String__Split(pSVar4,separator,(MethodInfo *)0x0);
                    /* try { // try from 0340dad8 to 0350dadf has its CatchHandler @ 0340db58 */
    lVar6 = FUN_01bab718(string___TypeInfo,2);
    if (pSVar5 == (System_String_array *)0x0) goto LAB_0340dc68;
    if (0 < (int)pSVar5->max_length) {
                    /* try { // try from 0340dafc to 0350daff has its CatchHandler @ 0340db4c */
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = pSVar5->max_length & 0xffffffff;
      do {
                    /* try { // try from 0340db0c to 0350db17 has its CatchHandler @ 0340db48 */
        if (uVar8 <= uVar9) goto LAB_0340dc64;
        pSVar4 = pSVar5->m_Items[uVar9];
                    /* try { // try from 0340db18 to 0350db3b has its CatchHandler @ 0340d7c0 */
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
        if (!bVar3) {
          if (1 < (int)uVar10) goto LAB_0340dc3c;
          if (lVar6 == 0) goto LAB_0340dc68;
                    /* try { // try from 0340db3c to 0350db3f has its CatchHandler @ 0340db54 */
          if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0340dc64;
                    /* try { // try from 0340db40 to 0350db43 has its CatchHandler @ 0340db50 */
                    /* try { // try from 0340db44 to 0350db6f has its CatchHandler @ 0340d7c0 */
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
          *puVar7 = pSVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340db0c with catch @ 0340db48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340dafc with catch @ 0340db4c
                        */
          uVar10 = uVar10 + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340db40 with catch @ 0340db50
                        */
          thunk_FUN_01c20e04(puVar7,pSVar4);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340db3c with catch @ 0340db54
                        */
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340dad8 with catch @ 0340db58
                        */
        uVar1 = (uint)pSVar5->max_length;
        uVar8 = (ulong)uVar1;
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)uVar1);
    }
                    /* try { // try from 0340db70 to 0350db73 has its CatchHandler @ 0340db94 */
    if (DAT_0455fa75 == '\0') {
                    /* try { // try from 0340db74 to 0350db9b has its CatchHandler @ 0340d7c0 */
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
                    /* catch() { ... } // from try @ 0340db70 with catch @ 0340db94 */
    local_58 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
                    /* try { // try from 0340db9c to 0350dba3 has its CatchHandler @ 0340dbb8 */
    if (lVar6 == 0) goto LAB_0340dc68;
                    /* try { // try from 0340dba4 to 0350dbaf has its CatchHandler @ 0340d7c0 */
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0340dc64:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 0340dbb0 to 0350dbb7 has its CatchHandler @ 0340dbb8 */
    pSVar4 = *(System_String_o **)(lVar6 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0340db9c with catch @ 0340dbb8
                       catch(type#2 @ 00000000) { ... } // from try @ 0340dbb0 with catch @ 0340dbb8
                        */
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar4,&local_58.x,(MethodInfo *)0x0);
    if (bVar3) {
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0340dc64;
      pSVar4 = *(System_String_o **)(lVar6 + 0x28);
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo_27FC874 *)0x0;
      bVar3 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar4,(float *)((ulong)&local_58 | 4),(MethodInfo *)0x0);
      if (bVar3) {
        local_50 = 0;
        local_48 = 0.0;
        __this.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
        __this.fields._0_8_ = &local_50;
        System_Nullable<Vector2>___ctor(__this,(UnityEngine_Vector2_o)local_58,method_00);
        goto LAB_0340dc44;
      }
    }
  }
LAB_0340dc3c:
  local_48 = 0.0;
  local_50 = 0;
LAB_0340dc44:
  SVar2.value.fields.y = local_48;
  SVar2.hasValue = (bool_conflict)(undefined1)local_50;
  SVar2._1_3_ = local_50._1_3_;
  SVar2.value.fields.x = (float)local_50._4_4_;
  return (System_Nullable_Vector2__o)SVar2;
}

