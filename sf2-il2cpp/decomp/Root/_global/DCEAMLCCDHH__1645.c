// TypeDefIndex 1645
// Namespace: 
// public class DCEAMLCCDHH
// Fields:
//   private string <MLEPHDNBABJ>k__BackingField; // 0x10
//   private string <COIPKAKHDFP>k__BackingField; // 0x18
//   private Color <BFEKLJGLHEH>k__BackingField; // 0x20
//   private Vector3 <ABODODGIMOO>k__BackingField; // 0x30
//   private float <HBNMFCBCBMD>k__BackingField; // 0x3C
//   private Vector3 <POODCHFIIJJ>k__BackingField; // 0x40

// ===== public Color GLIBGECPOPG()  [RVA 0x31BFF40]
// DCEAMLCCDHH$$GLIBGECPOPG @ RVA 0x31BFF40

UnityEngine_Color_o DCEAMLCCDHH__GLIBGECPOPG(DCEAMLCCDHH_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._BFEKLJGLHEH_k__BackingField.fields;
}


// ===== private void CGOMOPMGFDB(string CJNHFNHJHPE)  [RVA 0x31BFF4C]
// DCEAMLCCDHH$$CGOMOPMGFDB @ RVA 0x31BFF4C

void DCEAMLCCDHH__CGOMOPMGFDB(DCEAMLCCDHH_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MLEPHDNBABJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCODMKBDGIA()  [RVA 0x31BFF54]
// DCEAMLCCDHH$$KCODMKBDGIA @ RVA 0x31BFF54

System_String_o * DCEAMLCCDHH__KCODMKBDGIA(DCEAMLCCDHH_o *__this,MethodInfo *method)

{
  return (__this->fields)._MLEPHDNBABJ_k__BackingField;
}


// ===== public void .ctor(string KGLJICLJHEL, string AAIHDEKMIJG, Nullable<Vector3> BLEOKMIDGIK, float BIMDFEIIHBH = 0, Nullable<Vector3> JKOJPEKLBCI, Nullable<Color> EFJKPCADGJH)  [RVA 0x31BFF5C]
// DCEAMLCCDHH$$.ctor @ RVA 0x31BFF5C

void DCEAMLCCDHH___ctor(DCEAMLCCDHH_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *AAIHDEKMIJG,System_Nullable_Vector3__o BLEOKMIDGIK,
                       float BIMDFEIIHBH,System_Nullable_Vector3__o JKOJPEKLBCI,
                       System_Nullable_Color__o *EFJKPCADGJH,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((DAT_04566c13 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Vector3>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Vector3>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    DAT_04566c13 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(AAIHDEKMIJG,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AAIHDEKMIJG = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  }
  (__this->fields)._MLEPHDNBABJ_k__BackingField = AAIHDEKMIJG;
  thunk_FUN_01c20e04(&__this->fields,AAIHDEKMIJG);
  if ((BLEOKMIDGIK.fields._0_8_ & 0xff) == 0) {
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar7._0_4_ = (pUVar3->zeroVector).fields.x;
    uVar7._4_4_ = (pUVar3->zeroVector).fields.y;
    fVar4 = (pUVar3->zeroVector).fields.z;
  }
  else {
    fVar4 = BLEOKMIDGIK.fields.value.fields.z;
    uVar7 = BLEOKMIDGIK.fields.value.fields._0_8_;
  }
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.x = (float)(int)uVar7;
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.z = fVar4;
  (__this->fields)._HBNMFCBCBMD_k__BackingField = BIMDFEIIHBH;
  if ((JKOJPEKLBCI.fields._0_8_ & 0xff) == 0) {
    if (DAT_0455fa7f == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar8._0_4_ = (pUVar3->oneVector).fields.x;
    uVar8._4_4_ = (pUVar3->oneVector).fields.y;
    fVar4 = (pUVar3->oneVector).fields.z;
  }
  else {
    fVar4 = JKOJPEKLBCI.fields.value.fields.z;
    uVar8 = JKOJPEKLBCI.fields.value.fields._0_8_;
  }
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.x = (float)(int)uVar8;
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.y = (float)(int)((ulong)uVar8 >> 0x20);
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.z = fVar4;
  bVar1 = (EFJKPCADGJH->fields).hasValue != false;
  fVar4 = 1.0;
  if (bVar1) {
    fVar4 = (EFJKPCADGJH->fields).value.fields.a;
  }
  fVar6 = 1.0;
  if (bVar1) {
    fVar6 = (EFJKPCADGJH->fields).value.fields.b;
  }
  fVar9 = 1.0;
  if (bVar1) {
    fVar9 = (EFJKPCADGJH->fields).value.fields.g;
  }
  fVar5 = 1.0;
  if (bVar1) {
    fVar5 = (EFJKPCADGJH->fields).value.fields.r;
  }
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = fVar5;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = fVar9;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = fVar6;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = fVar4;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x31C0150]
// DCEAMLCCDHH$$KCHJCGEMCGE @ RVA 0x31C0150

System_String_o * DCEAMLCCDHH__KCHJCGEMCGE(DCEAMLCCDHH_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public float KFNFELMCKCH()  [RVA 0x31C0158]
// DCEAMLCCDHH$$KFNFELMCKCH @ RVA 0x31C0158

float DCEAMLCCDHH__KFNFELMCKCH(DCEAMLCCDHH_o *__this,MethodInfo *method)

{
  return (__this->fields)._HBNMFCBCBMD_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31C0160]
// DCEAMLCCDHH$$.ctor @ RVA 0x31C0160

void DCEAMLCCDHH___ctor(DCEAMLCCDHH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  System_Nullable_Color__Fields local_60;
  System_Nullable_Color__Fields local_48;
  
  if ((DAT_04566c14 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_10360/*"PosX"*/);
    FUN_01bab630(&StringLiteral_11717/*"ScaleY"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11428/*"Rotation"*/);
    FUN_01bab630(&StringLiteral_11716/*"ScaleX"*/);
    FUN_01bab630(&StringLiteral_10361/*"PosY"*/);
    FUN_01bab630(&StringLiteral_10168/*"Path"*/);
    DAT_04566c14 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10168/*"Path"*/,(MethodInfo *)0x0);
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
      }
      pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,pSVar3,(MethodInfo *)0x0);
      (__this->fields)._MLEPHDNBABJ_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10360/*"PosX"*/,(MethodInfo *)0x0);
          fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_10361/*"PosY"*/,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields)._ABODODGIMOO_k__BackingField.fields.x = fVar4;
            (__this->fields)._ABODODGIMOO_k__BackingField.fields.y = fVar5;
            (__this->fields)._ABODODGIMOO_k__BackingField.fields.z = 0.0;
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_11428/*"Rotation"*/,(MethodInfo *)0x0);
              fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              (__this->fields)._HBNMFCBCBMD_k__BackingField = fVar4;
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_11716/*"ScaleX"*/,(MethodInfo *)0x0);
                fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_11717/*"ScaleY"*/,(MethodInfo *)0x0);
                  fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
                  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.x = fVar4;
                  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.y = fVar5;
                  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.z = 1.0;
                  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar1,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)0x0;
                    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                                       (pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
                    local_48.hasValue = false;
                    local_48._1_3_ = 0;
                    local_48.value.fields.r = 0.0;
                    local_48.value.fields.g = 0.0;
                    local_48.value.fields.b = 0.0;
                    local_48.value.fields.a = 0.0;
                    UVar6.fields.b = 1.0;
                    UVar6.fields.a = 1.0;
                    UVar6.fields.r = 1.0;
                    UVar6.fields.g = 1.0;
                    System_Nullable<Color>___ctor
                              ((System_Nullable_Color__o *)&local_48,UVar6,
                               Method_System_Nullable<Color>__ctor__);
                    local_60.value.fields.g = local_48.value.fields.g;
                    local_60.value.fields.b = local_48.value.fields.b;
                    local_60.hasValue = local_48.hasValue;
                    local_60._1_3_ = local_48._1_3_;
                    local_60.value.fields.r = local_48.value.fields.r;
                    local_60.value.fields.a = local_48.value.fields.a;
                    UVar6 = CFBGPBCDAGA__HPBCENEFAMD
                                      (pSVar3,1.0,(System_Nullable_Color__o *)&local_60,method_00);
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = UVar6.fields.r;
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = UVar6.fields.g;
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = UVar6.fields.b;
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = UVar6.fields.a;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DEOLNHCHIEO(float CJNHFNHJHPE)  [RVA 0x31C04CC]
// DCEAMLCCDHH$$DEOLNHCHIEO @ RVA 0x31C04CC

void DCEAMLCCDHH__DEOLNHCHIEO(DCEAMLCCDHH_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HBNMFCBCBMD_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void INLEKLAIDGJ(Vector3 CJNHFNHJHPE)  [RVA 0x31C04D4]
// DCEAMLCCDHH$$INLEKLAIDGJ @ RVA 0x31C04D4

void DCEAMLCCDHH__INLEKLAIDGJ
               (DCEAMLCCDHH_o *__this,UnityEngine_Vector3_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.z = CJNHFNHJHPE.fields.z;
  return;
}


// ===== public Vector3 JMAHLDGKJAK()  [RVA 0x31C04E0]
// DCEAMLCCDHH$$JMAHLDGKJAK @ RVA 0x31C04E0

UnityEngine_Vector3_o DCEAMLCCDHH__JMAHLDGKJAK(DCEAMLCCDHH_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._POODCHFIIJJ_k__BackingField.fields;
}


// ===== private void LJGIFDBOCNN(Color CJNHFNHJHPE)  [RVA 0x31C04EC]
// DCEAMLCCDHH$$LJGIFDBOCNN @ RVA 0x31C04EC

void DCEAMLCCDHH__LJGIFDBOCNN
               (DCEAMLCCDHH_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = CJNHFNHJHPE.fields.r;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = CJNHFNHJHPE.fields.g;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = CJNHFNHJHPE.fields.b;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = CJNHFNHJHPE.fields.a;
  return;
}


// ===== private void MFGIDAHNDGI(Vector3 CJNHFNHJHPE)  [RVA 0x31C04F8]
// DCEAMLCCDHH$$MFGIDAHNDGI @ RVA 0x31C04F8

void DCEAMLCCDHH__MFGIDAHNDGI
               (DCEAMLCCDHH_o *__this,UnityEngine_Vector3_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.z = CJNHFNHJHPE.fields.z;
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x31C0504]
// DCEAMLCCDHH$$HCOCAAIGNNL @ RVA 0x31C0504

void DCEAMLCCDHH__HCOCAAIGNNL(DCEAMLCCDHH_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public Vector3 OFDDJINNMNE()  [RVA 0x31C050C]
// DCEAMLCCDHH$$OFDDJINNMNE @ RVA 0x31C050C

UnityEngine_Vector3_o DCEAMLCCDHH__OFDDJINNMNE(DCEAMLCCDHH_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._ABODODGIMOO_k__BackingField.fields;
}

