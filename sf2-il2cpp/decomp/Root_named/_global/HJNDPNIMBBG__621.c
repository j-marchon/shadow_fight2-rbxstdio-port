// TypeDefIndex 621
// Namespace: 
// public class HJNDPNIMBBG
// Fields:
//   private const string FNKNJBKONGK = "dojo";
//   private const string GFAMPBNFJAE = "BG";
//   private string NAAMEIBLICP; // 0x10
//   private Nullable<Color> GDJDEBNNDOO; // 0x18
//   private Sprite EDACJMBBGNF; // 0x30

// ===== public Color EMBBBGLKPNN()  [RVA 0x35C5288]
// HJNDPNIMBBG$$EMBBBGLKPNN @ RVA 0x35C5288

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Color_o HJNDPNIMBBG__EMBBBGLKPNN(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  System_Nullable_Color__o *pSVar1;
  MethodInfo *extraout_x1;
  System_Nullable_Color__o *__this_00;
  UnityEngine_Color_Fields UVar2;
  System_Nullable_Color__Fields local_58;
  System_Nullable_Color__Fields local_40;
  
  if ((DAT_04568f5d & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    DAT_04568f5d = 1;
    method = extraout_x1;
  }
  __this_00 = &(__this->fields).GDJDEBNNDOO;
  if ((__this_00->fields).hasValue == false) {
    HJNDPNIMBBG__NDHNMCOKAEB((System_Nullable_Color__o *)&local_58,__this,method);
    local_40.value.fields.a = local_58.value.fields.a;
    local_40.value.fields.g = local_58.value.fields.g;
    local_40.value.fields.b = local_58.value.fields.b;
    local_40.hasValue = local_58.hasValue;
    local_40._1_3_ = local_58._1_3_;
    local_40.value.fields.r = local_58.value.fields.r;
    (__this->fields).GDJDEBNNDOO.fields.value.fields.a = local_58.value.fields.a;
    pSVar1 = &(__this->fields).GDJDEBNNDOO;
                    /* try { // try from 036c52f8 to 037c538f has its CatchHandler @ 036c52f8
                       catch() { ... } // from try @ 036c52f8 with catch @ 036c52f8
                       catch() { ... } // from try @ 036c53cc with catch @ 036c52f8
                       catch() { ... } // from try @ 036c53f4 with catch @ 036c52f8
                       catch() { ... } // from try @ 036c5420 with catch @ 036c52f8
                       catch() { ... } // from try @ 036c5454 with catch @ 036c52f8 */
    (pSVar1->fields).value.fields.g = local_58.value.fields.g;
    (pSVar1->fields).value.fields.b = local_58.value.fields.b;
    (__this_00->fields).hasValue = local_58.hasValue;
    *(undefined3 *)&(__this_00->fields).field_0x1 = local_58._1_3_;
    (__this_00->fields).value.fields.r = local_58.value.fields.r;
  }
  UVar2 = (UnityEngine_Color_Fields)
          System_Nullable<Color>__get_Value(__this_00,Method_System_Nullable<Color>_get_Value__);
  return (UnityEngine_Color_o)UVar2;
}


// ===== public void LAPNHIJGIGH(string CJNHFNHJHPE)  [RVA 0x35C55A0]
// HJNDPNIMBBG$$LAPNHIJGIGH @ RVA 0x35C55A0

/* WARNING: Type propagation algorithm not settling */

void HJNDPNIMBBG__LAPNHIJGIGH(HJNDPNIMBBG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Nullable_Color__o *pSVar1;
  bool bVar2;
  UnityEngine_Sprite_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Sprite_o **ppUVar4;
  System_Nullable_Color__Fields local_58;
  System_Nullable_Color__Fields local_40;
  
  bVar2 = System_String__op_Equality((__this->fields).NAAMEIBLICP,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar2) {
    (__this->fields).NAAMEIBLICP = CJNHFNHJHPE;
    thunk_FUN_01c20e04(&__this->fields,CJNHFNHJHPE);
    HJNDPNIMBBG__NDHNMCOKAEB((System_Nullable_Color__o *)&local_58,__this,method_00);
    local_40.value.fields.a = local_58.value.fields.a;
    local_40.value.fields.g = local_58.value.fields.g;
    local_40.value.fields.b = local_58.value.fields.b;
    local_40.hasValue = local_58.hasValue;
    local_40._1_3_ = local_58._1_3_;
    local_40.value.fields.r = local_58.value.fields.r;
    (__this->fields).GDJDEBNNDOO.fields.value.fields.a = local_58.value.fields.a;
    pSVar1 = &(__this->fields).GDJDEBNNDOO;
    (pSVar1->fields).value.fields.g = local_58.value.fields.g;
    (pSVar1->fields).value.fields.b = local_58.value.fields.b;
    (__this->fields).GDJDEBNNDOO.fields.hasValue = local_58.hasValue;
    *(undefined3 *)&(__this->fields).GDJDEBNNDOO.fields.field_0x1 = local_58._1_3_;
    (__this->fields).GDJDEBNNDOO.fields.value.fields.r = local_58.value.fields.r;
    pUVar3 = HJNDPNIMBBG__HEOBDIBNECE(__this,method_01);
    ppUVar4 = &(__this->fields).EDACJMBBGNF;
    *ppUVar4 = pUVar3;
    thunk_FUN_01c20e04(ppUVar4,pUVar3);
  }
  return;
}


// ===== public void .ctor()  [RVA 0x35C56E4]
// HJNDPNIMBBG$$.ctor @ RVA 0x35C56E4

void HJNDPNIMBBG___ctor(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private Nullable<Color> NDHNMCOKAEB()  [RVA 0x35C5318]
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
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
                    /* try { // try from 036c5390 to 037c5397 has its CatchHandler @ 036c5408 */
    FUN_01bab630(&StringLiteral_17862/*"dojo"*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_11416/*"Root"*/);
                    /* try { // try from 036c53b0 to 037c53bb has its CatchHandler @ 036c5400 */
    FUN_01bab630(&StringLiteral_16212/*"_params.xml"*/);
                    /* try { // try from 036c53bc to 037c53cb has its CatchHandler @ 036c5404 */
    DAT_04568f5e = 1;
  }
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields).NAAMEIBLICP,(MethodInfo *)0x0);
  pHVar1 = (HJNDPNIMBBG_Fields *)&StringLiteral_17862/*"dojo"*/;
                    /* try { // try from 036c53cc to 037c53eb has its CatchHandler @ 036c52f8 */
  if (!bVar2) {
    pHVar1 = &__this->fields;
  }
  pSVar6 = pHVar1->NAAMEIBLICP;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
                    /* try { // try from 036c53ec to 037c53ef has its CatchHandler @ 036c53fc */
                    /* try { // try from 036c53f0 to 037c53f3 has its CatchHandler @ 036c53f8 */
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036c53f4 to 037c541b has its CatchHandler @ 036c52f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53f0 with catch @ 036c53f8
                        */
    thunk_FUN_01ba7564(SF2Paths_TypeInfo);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53ec with catch @ 036c53fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c53b0 with catch @ 036c5400
                        */
  pSVar3 = SF2Paths__DPOEFEMDMJI((MethodInfo *)0x0);
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
        values->m_Items[1] = StringLiteral_1492/*"/"*/;
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
            values->m_Items[3] = StringLiteral_1492/*"/"*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar6;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar6);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_16212/*"_params.xml"*/;
                thunk_FUN_01c20e04();
                pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
                pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar6,1,true,true,false,(MethodInfo *)0x0);
                if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
                  plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                             (pSVar4,StringLiteral_11416/*"Root"*/,
                                              (pSVar4->klass->vtable)._51_get_Item.method);
                  if (plVar5 != (long *)0x0) {
                    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                                (**(code **)(*plVar5 + 0x238))
                                          (plVar5,*(undefined8 *)(*plVar5 + 0x240));
                    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                              (__this_00,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
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


// ===== internal static Sprite PJJJCGCPIBD(string ELNOBGPJBKH)  [RVA 0x35C56EC]
// HJNDPNIMBBG$$PJJJCGCPIBD @ RVA 0x35C56EC

UnityEngine_Sprite_o * HJNDPNIMBBG__PJJJCGCPIBD(System_String_o *ELNOBGPJBKH,MethodInfo *method)

{
  System_String_o *NPNDHEBBEAD;
  UnityEngine_Sprite_o *pUVar1;
  
  if ((DAT_04568f5f & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3289/*"BG"*/);
    FUN_01bab630(&StringLiteral_1501/*"/StaticImage"*/);
    FUN_01bab630(&StringLiteral_12920/*"Textures/Locations/"*/);
    DAT_04568f5f = 1;
  }
  NPNDHEBBEAD = System_String__Concat
                          (StringLiteral_12920/*"Textures/Locations/"*/,ELNOBGPJBKH,StringLiteral_1501/*"/StaticImage"*/,(MethodInfo *)0x0);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
  }
  pUVar1 = NGCBNMBJMOE__NECCNHODCAE
                     (NPNDHEBBEAD,StringLiteral_3289/*"BG"*/,StringLiteral_3289/*"BG"*/,false,(MethodInfo *)0x0);
  return pUVar1;
}


// ===== public string GPLHOCEDOHO()  [RVA 0x35C57B0]
// HJNDPNIMBBG$$GPLHOCEDOHO @ RVA 0x35C57B0

System_String_o * HJNDPNIMBBG__GPLHOCEDOHO(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  return (__this->fields).NAAMEIBLICP;
}


// ===== private Sprite HEOBDIBNECE()  [RVA 0x35C5624]
// HJNDPNIMBBG$$HEOBDIBNECE @ RVA 0x35C5624

UnityEngine_Sprite_o * HJNDPNIMBBG__HEOBDIBNECE(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  HJNDPNIMBBG_Fields *pHVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_Object_o *exists;
  UnityEngine_Sprite_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568f60 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_17862/*"dojo"*/);
    DAT_04568f60 = 1;
  }
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH((__this->fields).NAAMEIBLICP,(MethodInfo *)0x0);
  pHVar1 = (HJNDPNIMBBG_Fields *)&StringLiteral_17862/*"dojo"*/;
  if (!bVar2) {
    pHVar1 = &__this->fields;
  }
  exists = (UnityEngine_Object_o *)HJNDPNIMBBG__PJJJCGCPIBD(pHVar1->NAAMEIBLICP,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar2 || bVar3) {
    return (UnityEngine_Sprite_o *)exists;
  }
  pUVar4 = HJNDPNIMBBG__PJJJCGCPIBD(StringLiteral_17862/*"dojo"*/,method_01);
  return pUVar4;
}


// ===== public Sprite JDHIIDFJMBM()  [RVA 0x35C57B8]
// HJNDPNIMBBG$$JDHIIDFJMBM @ RVA 0x35C57B8

UnityEngine_Sprite_o * HJNDPNIMBBG__JDHIIDFJMBM(HJNDPNIMBBG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Sprite_o **ppUVar3;
  UnityEngine_Object_o *exists;
  
  if ((DAT_04568f61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f61 = 1;
    method = extraout_x1;
  }
  ppUVar3 = &(__this->fields).EDACJMBBGNF;
  exists = (UnityEngine_Object_o *)*ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = HJNDPNIMBBG__HEOBDIBNECE(__this,method_00);
    (__this->fields).EDACJMBBGNF = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
  }
  return *ppUVar3;
}

