// HJNDPNIMBBG$$NDHNMCOKAEB @ RVA 0x35C5318

void HJNDPNIMBBG__NDHNMCOKAEB
               (System_Nullable_Color__o *__return_storage_ptr__,HJNDPNIMBBG_o *__this,
               MethodInfo *method)

{
  HJNDPNIMBBG_Fields *pHVar1;
  MethodInfo_27F5874 *method_00;
  bool bVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar6;
  UnityEngine_Color_o value;
  System_Nullable_Color__Fields local_58;
  
  if ((DAT_04568f5e & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_4476);
                    /* try { // try from 036c5390 to 037c5397 has its CatchHandler @ 036c5408 */
    FUN_01bab630(&StringLiteral_17862);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_11416);
                    /* try { // try from 036c53b0 to 037c53bb has its CatchHandler @ 036c5400 */
    FUN_01bab630(&StringLiteral_16212);
                    /* try { // try from 036c53bc to 037c53cb has its CatchHandler @ 036c5404 */
    DAT_04568f5e = 1;
  }
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields).NAAMEIBLICP,(MethodInfo *)0x0);
  pHVar1 = (HJNDPNIMBBG_Fields *)&StringLiteral_17862;
                    /* try { // try from 036c53cc to 037c53eb has its CatchHandler @ 036c52f8 */
  if (!bVar2) {
    pHVar1 = &__this->fields;
  }
  pSVar6 = pHVar1->NAAMEIBLICP;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
                    /* try { // try from 036c53ec to 037c53ef has its CatchHandler @ 036c53fc */
                    /* try { // try from 036c53f0 to 037c53f3 has its CatchHandler @ 036c53f8 */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036c53f4 to 037c541b has its CatchHandler @ 036c52f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53f0 with catch @ 036c53f8
                        */
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53ec with catch @ 036c53fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53b0 with catch @ 036c5400
                        */
  pSVar3 = MGENAMAJALB__DPOEFEMDMJI((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53bc with catch @ 036c5404
                        */
  if (values != (System_String_array *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c5390 with catch @ 036c5408
                        */
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar3;
                    /* try { // try from 036c541c to 037c541f has its CatchHandler @ 036c5444 */
                    /* try { // try from 036c5420 to 037c544b has its CatchHandler @ 036c52f8 */
      thunk_FUN_01c20e04(values->m_Items,pSVar3);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_1492;
                    /* catch() { ... } // from try @ 036c541c with catch @ 036c5444 */
        thunk_FUN_01c20e04(values->m_Items + 1);
                    /* try { // try from 036c544c to 037c5453 has its CatchHandler @ 036c546c */
                    /* try { // try from 036c5454 to 037c5463 has its CatchHandler @ 036c52f8 */
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar6;
                    /* try { // try from 036c5464 to 037c546b has its CatchHandler @ 036c546c */
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar6);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c544c with catch @ 036c546c
                       catch(type#2 @ 00000000) { ... } // from try @ 036c5464 with catch @ 036c546c
                        */
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_1492;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar6;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar6);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_16212;
                thunk_FUN_01c20e04();
                pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
                pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar6,1,true,true,false,(MethodInfo *)0x0);
                if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
                  plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                             (pSVar4,StringLiteral_11416,
                                              (pSVar4->klass->vtable)._51_get_Item.method);
                  if (plVar5 != (long *)0x0) {
                    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                                (**(code **)(*plVar5 + 0x238))
                                          (plVar5,*(undefined8 *)(*plVar5 + 0x240));
                    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                              (__this_00,StringLiteral_4476,(MethodInfo *)0x0);
                      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                                         (LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
                      local_58.hasValue = false;
                      local_58._1_3_ = 0;
                      local_58.value.fields.r = 0.0;
                      local_58.value.fields.g = 0.0;
                      local_58.value.fields.b = 0.0;
                      local_58.value.fields.a = 0.0;
                      value = CFBGPBCDAGA__HPBCENEFAMD
                                        (pSVar6,1.0,(System_Nullable_Color__o *)&local_58,
                                         (MethodInfo *)0x0);
                      method_00 = Method_System_Nullable<Color>__ctor__;
                      (__return_storage_ptr__->fields).hasValue = false;
                      *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = 0;
                      (__return_storage_ptr__->fields).value.fields.r = 0.0;
                      (__return_storage_ptr__->fields).value.fields.g = 0.0;
                      (__return_storage_ptr__->fields).value.fields.b = 0.0;
                      (__return_storage_ptr__->fields).value.fields.a = 0.0;
                      System_Nullable<Color>___ctor(__return_storage_ptr__,value,method_00);
                      return;
                    }
                  }
                }
                goto LAB_036c559c;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_036c559c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

