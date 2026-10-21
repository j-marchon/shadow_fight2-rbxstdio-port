// JOCNCPCOEAC$$.ctor @ RVA 0x343B228

void JOCNCPCOEAC___ctor(JOCNCPCOEAC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  System_Nullable_Vector3__o BLEOKMIDGIK;
  long lVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  DCEAMLCCDHH_o *__this_01;
  MethodInfo_27FCC94 *method_00;
  DCEAMLCCDHH_array *pDVar4;
  System_Collections_Generic_List_DCEAMLCCDHH__o *__this_02;
  System_Nullable_Vector3__o __this_03;
  System_Nullable_Color__Fields local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_045681d2 & 1) == 0) {
    FUN_01bab630(&DCEAMLCCDHH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCEAMLCCDHH>_Add__);
    FUN_01bab630(&Method_System_Nullable<Vector3>__ctor__);
    FUN_01bab630(&StringLiteral_12931);
    FUN_01bab630(&StringLiteral_8820);
    FUN_01bab630(&StringLiteral_4969);
    DAT_045681d2 = 1;
  }
  IGNEHHMICKB___ctor((IGNEHHMICKB_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_4969,(MethodInfo *)0x0);
    method_00 = (MethodInfo_27FCC94 *)0x0;
    bVar3 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
    (__this->fields)._CPKCJMEJBBJ_k__BackingField = bVar3;
    if (bVar3) {
      return;
    }
    __this_02 = (__this->fields).super._PDJNNFIEOCM_k__BackingField;
    local_30 = 0;
    uStack_28 = 0;
    __this_03.fields.value.fields.y = (float)(undefined4)Method_System_Nullable<Vector3>__ctor__;
    __this_03.fields.value.fields.z = (float)Method_System_Nullable<Vector3>__ctor__._4_4_;
    __this_03.fields._0_8_ = &local_30;
    System_Nullable<Vector3>___ctor
              (__this_03,(UnityEngine_Vector3_o)ZEXT812(0x4130000042840000),method_00);
    __this_01 = (DCEAMLCCDHH_o *)thunk_FUN_01bda818(DCEAMLCCDHH_TypeInfo);
    BLEOKMIDGIK.fields.value.fields.y = (float)(undefined4)uStack_28;
    BLEOKMIDGIK.fields.value.fields.z = (float)uStack_28._4_4_;
    BLEOKMIDGIK.fields.hasValue = (bool_conflict)(undefined1)local_30;
    BLEOKMIDGIK.fields._1_3_ = local_30._1_3_;
    BLEOKMIDGIK.fields.value.fields.x = (float)local_30._4_4_;
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value.fields.r = 0.0;
    local_48.value.fields.g = 0.0;
    local_48.value.fields.b = 0.0;
    local_48.value.fields.a = 0.0;
    DCEAMLCCDHH___ctor(__this_01,StringLiteral_8820,StringLiteral_12931,BLEOKMIDGIK,0.0,
                       (System_Nullable_Vector3__o)ZEXT816(0),(System_Nullable_Color__o *)&local_48,
                       (MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<DCEAMLCCDHH>_Add__;
    if (__this_02 != (System_Collections_Generic_List_DCEAMLCCDHH__o *)0x0) {
      pDVar4 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pDVar4 != (DCEAMLCCDHH_array *)0x0) {
        uVar1 = (__this_02->fields)._size;
        if (uVar1 < (uint)pDVar4->max_length) {
          (__this_02->fields)._size = uVar1 + 1;
          pDVar4->m_Items[(int)uVar1] = __this_01;
          thunk_FUN_01c20e04(pDVar4->m_Items + (int)uVar1,__this_01);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

