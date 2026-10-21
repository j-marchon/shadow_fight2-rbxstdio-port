// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionEffect  (obfuscated HDBPKHNKOGI)
// TypeDefIndex 1470
// Namespace: 
// public class ActionEffect : ActionAnimation, FFACFPOGPAJ
// Fields:
//   private string NPFMOEOIEKM; // 0x48
//   public const string CGOINFNPIJJ = "Textures/Effects/Magic/";
//   private string MJPPLPGPHIK; // 0x50
//   private Vector2 AHODAMCBIHA; // 0x58
//   private float BJKDOBKIBIA; // 0x60
//   private bool GFPACGPFOPI; // 0x64
//   private bool PKPOHCOEHEN; // 0x65
//   private bool FJACNELHGAK; // 0x66
//   private bool ALOJEOEGPJO; // 0x67
//   private DistancePoint NDOAINJDMIH; // 0x68
//   private bool NMIEFOCHBNM; // 0x70
//   private int CJCHAPGIHAB; // 0x74
//   private float NDGEJKPCAPM; // 0x78
//   private CPAJCJHOLEJ PKNGDBGLNEO; // 0x80
//   private string <IMJDKOBJMAJ>k__BackingField; // 0x88

// ===== public void NIPFFEGFKHC(bool CJNHFNHJHPE)  [RVA 0x3194228]
// ActionEffect$$NIPFFEGFKHC @ RVA 0x3194228

void ActionEffect__NIPFFEGFKHC(ActionEffect_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NMIEFOCHBNM = CJNHFNHJHPE;
  return;
}


// ===== public bool JFGNHECINPP()  [RVA 0x3194234]
// ActionEffect$$JFGNHECINPP @ RVA 0x3194234

bool ActionEffect__JFGNHECINPP(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).ALOJEOEGPJO;
}


// ===== public string GAAFABHPGIG()  [RVA 0x319423C]
// ActionEffect$$GAAFABHPGIG @ RVA 0x319423C

System_String_o * ActionEffect__GAAFABHPGIG(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields)._IMJDKOBJMAJ_k__BackingField;
}


// ===== public DistancePoint OFDDJINNMNE()  [RVA 0x3194244]
// ActionEffect$$OFDDJINNMNE @ RVA 0x3194244

DistancePoint_o * ActionEffect__OFDDJINNMNE(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).NDOAINJDMIH;
}


// ===== public Vector2 JMAHLDGKJAK()  [RVA 0x319424C]
// ActionEffect$$JMAHLDGKJAK @ RVA 0x319424C

UnityEngine_Vector2_o ActionEffect__JMAHLDGKJAK(ActionEffect_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields).AHODAMCBIHA.fields;
}


// ===== public void KHKLLNFCMME(ModelObject NCNGALIAHJL, bool FOFCAILEKJD, ModelNode IIBPJLKGEBP, bool BHKCLMLKLNB, ModelObject CHBJNMMEAPG)  [RVA 0x31931F0]
// ActionEffect$$KHKLLNFCMME @ RVA 0x31931F0

void ActionEffect__KHKLLNFCMME
               (ActionEffect_o *__this,ModelObject_o *NCNGALIAHJL,bool FOFCAILEKJD,
               ModelNode_o *IIBPJLKGEBP,bool BHKCLMLKLNB,ModelObject_o *CHBJNMMEAPG,
               MethodInfo *method)

{
  DistancePoint_o *__this_00;
  
  __this_00 = (__this->fields).NDOAINJDMIH;
  if (__this_00 != (DistancePoint_o *)0x0) {
    DistancePoint__KEAKEIPABPP
              (__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string JCPIPEJAIAC()  [RVA 0x3194254]
// ActionEffect$$JCPIPEJAIAC @ RVA 0x3194254

System_String_o * ActionEffect__JCPIPEJAIAC(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).MJPPLPGPHIK;
}


// ===== public bool FIDJFEGCIIL()  [RVA 0x319425C]
// ActionEffect$$FIDJFEGCIIL @ RVA 0x319425C

bool ActionEffect__FIDJFEGCIIL(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).GFPACGPFOPI;
}


// ===== public float AFILDHPIJIC()  [RVA 0x3194264]
// ActionEffect$$AFILDHPIJIC @ RVA 0x3194264

float ActionEffect__AFILDHPIJIC(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).BJKDOBKIBIA;
}


// ===== private void HJAABOFBGLL(string CJNHFNHJHPE)  [RVA 0x319426C]
// ActionEffect$$HJAABOFBGLL @ RVA 0x319426C

void ActionEffect__HJAABOFBGLL(ActionEffect_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IMJDKOBJMAJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3194274]
// ActionEffect$$HNIHOIAMDPC @ RVA 0x3194274

void ActionEffect__HNIHOIAMDPC
               (ActionEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  CPAJCJHOLEJ_o *__this_00;
  long *plVar6;
  DistancePoint_o *pPVar7;
  System_Object_array *args;
  long lVar8;
  undefined8 uVar9;
  CPAJCJHOLEJ_o **ppCVar10;
  System_String_o **ppSVar11;
  System_String_o **ppSVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_04566a57 & 1) == 0) {
    FUN_01bab630(&CPAJCJHOLEJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_11713/*"Scale"*/);
    FUN_01bab630(&StringLiteral_2729/*"ActionEffect::parse - no position element for sequence: {0}"*/);
    FUN_01bab630(&StringLiteral_11717/*"ScaleY"*/);
    FUN_01bab630(&StringLiteral_8667/*"Looped"*/);
    FUN_01bab630(&StringLiteral_12419/*"StopFollowframe"*/);
    FUN_01bab630(&StringLiteral_10362/*"Position"*/);
    FUN_01bab630(&StringLiteral_9847/*"OnBackground"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12370/*"StartRotation"*/);
    FUN_01bab630(&StringLiteral_11716/*"ScaleX"*/);
    FUN_01bab630(&StringLiteral_3158/*"Attach"*/);
    FUN_01bab630(&StringLiteral_11820/*"Sequence"*/);
    FUN_01bab630(&StringLiteral_9848/*"OnBackgroundCheck"*/);
    FUN_01bab630(&StringLiteral_10072/*"PackName"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6507/*"Follow"*/);
    FUN_01bab630(&StringLiteral_13804/*"TimeScale"*/);
    FUN_01bab630(&StringLiteral_3365/*"Backwards"*/);
    DAT_04566a57 = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    ppSVar11 = &(__this->fields).NPFMOEOIEKM;
    *ppSVar11 = pSVar5;
    thunk_FUN_01c20e04(ppSVar11,pSVar5);
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11820/*"Sequence"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).MJPPLPGPHIK = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11713/*"Scale"*/,(MethodInfo *)0x0);
        fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,1.0,(MethodInfo *)0x0);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_13804/*"TimeScale"*/,(MethodInfo *)0x0);
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,1.0,(MethodInfo *)0x0);
          (__this->fields).BJKDOBKIBIA = fVar14;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_8667/*"Looped"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).GFPACGPFOPI = bVar1;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_9847/*"OnBackground"*/,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
              (__this->fields).PKPOHCOEHEN = bVar1;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_9848/*"OnBackgroundCheck"*/,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                (__this->fields).FJACNELHGAK = bVar1;
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_3365/*"Backwards"*/,(MethodInfo *)0x0);
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                  (__this->fields).ALOJEOEGPJO = bVar1;
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_11716/*"ScaleX"*/,(MethodInfo *)0x0);
                    fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,fVar13,(MethodInfo *)0x0);
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_11717/*"ScaleY"*/,(MethodInfo *)0x0);
                      fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,fVar13,(MethodInfo *)0x0);
                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar3,StringLiteral_12370/*"StartRotation"*/,(MethodInfo *)0x0);
                        fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                        (__this->fields).NDGEJKPCAPM = fVar15;
                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar3,StringLiteral_10072/*"PackName"*/,(MethodInfo *)0x0);
                          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar4,string_TypeInfo->static_fields->Empty,
                                              (MethodInfo *)0x0);
                          ppSVar12 = &(__this->fields)._IMJDKOBJMAJ_k__BackingField;
                          *ppSVar12 = pSVar5;
                          thunk_FUN_01c20e04(ppSVar12,pSVar5);
                          (__this->fields).AHODAMCBIHA.fields.x = fVar14;
                          (__this->fields).AHODAMCBIHA.fields.y = fVar13;
                          AHDGNOJPPIB_00 =
                               (System_Xml_XmlNode_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                         (AHDGNOJPPIB,StringLiteral_3158/*"Attach"*/,
                                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                          if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                            __this_00 = (CPAJCJHOLEJ_o *)thunk_FUN_01bda818(CPAJCJHOLEJ_TypeInfo);
                            CPAJCJHOLEJ___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
                            ppCVar10 = &(__this->fields).PKNGDBGLNEO;
                            *ppCVar10 = __this_00;
                            thunk_FUN_01c20e04(ppCVar10,__this_00);
                            (__this->fields).NMIEFOCHBNM = true;
                            return;
                          }
                          plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                     (AHDGNOJPPIB,StringLiteral_10362/*"Position"*/,
                                                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.
                                                      method);
                          if (plVar6 == (long *)0x0) {
                            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                            if (args != (System_Object_array *)0x0) {
                              pSVar5 = *ppSVar11;
                              if ((pSVar5 != (System_String_o *)0x0) &&
                                 (lVar8 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).
                                                                    element_class), lVar8 == 0)) {
                                uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                                FUN_01bab798(uVar9,0);
                              }
                              if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8d0();
                              }
                              args->m_Items[0] = (Il2CppObject *)pSVar5;
                              thunk_FUN_01c20e04(args->m_Items,pSVar5);
                              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              UnityEngine_Debug__LogErrorFormat
                                        (StringLiteral_2729/*"ActionEffect::parse - no position element for sequence: {0}"*/,args,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          else {
                            pPVar7 = (__this->fields).NDOAINJDMIH;
                            if (pPVar7 != (DistancePoint_o *)0x0) {
                              (*(pPVar7->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                                        (pPVar7,plVar6,(pPVar7->klass->vtable)._4_EOHMFJFFFIN.method
                                        );
                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar6 + 0x238))
                                                 (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar3,StringLiteral_6507/*"Follow"*/,(MethodInfo *)0x0);
                                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                                (__this->fields).NMIEFOCHBNM = bVar1;
                                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                         (**(code **)(*plVar6 + 0x238))
                                                   (plVar6,*(undefined8 *)(*plVar6 + 0x240));
                                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar3,StringLiteral_12419/*"StopFollowframe"*/,(MethodInfo *)0x0);
                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,-1,(MethodInfo *)0x0);
                                  (__this->fields).CJCHAPGIHAB = iVar2;
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


// ===== public bool JHGHKJPJDHL()  [RVA 0x31948BC]
// ActionEffect$$JHGHKJPJDHL @ RVA 0x31948BC

bool ActionEffect__JHGHKJPJDHL(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).FJACNELHGAK;
}


// ===== public bool JLBAENPCPHP()  [RVA 0x31948C4]
// ActionEffect$$JLBAENPCPHP @ RVA 0x31948C4

bool ActionEffect__JLBAENPCPHP(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).NMIEFOCHBNM;
}


// ===== public void HCIAPDHGJKA()  [RVA 0x3193AD4]
// ActionEffect$$HCIAPDHGJKA @ RVA 0x3193AD4

void ActionEffect__HCIAPDHGJKA(ActionEffect_o *__this,MethodInfo *method)

{
  DistancePoint_o *__this_00;
  
  __this_00 = (__this->fields).NDOAINJDMIH;
  if (__this_00 != (DistancePoint_o *)0x0) {
    DistancePoint__NODBBDLAIHD(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CPAJCJHOLEJ EDHDPKFEACM()  [RVA 0x31948CC]
// ActionEffect$$EDHDPKFEACM @ RVA 0x31948CC

CPAJCJHOLEJ_o * ActionEffect__EDHDPKFEACM(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).PKNGDBGLNEO;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x31948D4]
// ActionEffect$$KCHJCGEMCGE @ RVA 0x31948D4

System_String_o * ActionEffect__KCHJCGEMCGE(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public float CFLHAMFNOIF()  [RVA 0x31948DC]
// ActionEffect$$CFLHAMFNOIF @ RVA 0x31948DC

float ActionEffect__CFLHAMFNOIF(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).NDGEJKPCAPM;
}


// ===== public bool FMGGGLBECCJ()  [RVA 0x31948E4]
// ActionEffect$$FMGGGLBECCJ @ RVA 0x31948E4

bool ActionEffect__FMGGGLBECCJ(ActionEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).PKPOHCOEHEN;
}


// ===== public string JEOMMIPAKPE()  [RVA 0x31948EC]
// ActionEffect$$JEOMMIPAKPE @ RVA 0x31948EC

System_String_o * ActionEffect__JEOMMIPAKPE(ActionEffect_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566a58 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12915/*"Textures/Effects/Magic/"*/);
    DAT_04566a58 = 1;
  }
  pSVar1 = System_String__Concat(StringLiteral_12915/*"Textures/Effects/Magic/"*/,(__this->fields).MJPPLPGPHIK,(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// ===== public override void NCMDLPOGBPE()  [RVA 0x3194938]
// ActionEffect$$NCMDLPOGBPE @ RVA 0x3194938

void ActionEffect__NCMDLPOGBPE(ActionEffect_o *__this,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this_00;
  System_String_o *PHLFGGGHGAK;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a59 & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04566a59 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (!bVar1) {
    __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (AAPGCAPGBLG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = AAPGCAPGBLG__BAFDBLCFCPO
                      (__this_00,(__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
    if (!bVar1) {
      return;
    }
  }
  PHLFGGGHGAK = ActionEffect__JEOMMIPAKPE(__this,method_00);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
  }
  NGCBNMBJMOE__MMHFNAEHAKC(PHLFGGGHGAK,false,(MethodInfo *)0x0);
  return;
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x31949E0]
// ActionEffect$$DPGIIHOJJDE @ RVA 0x31949E0

void ActionEffect__DPGIIHOJJDE(ActionEffect_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3194A00]
// ActionEffect$$.ctor @ RVA 0x3194A00

void ActionEffect___ctor(ActionEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  DistancePoint_o *__this_00;
  DistancePoint_o **ppPVar1;
  
  if ((DAT_04566a5a & 1) == 0) {
    FUN_01bab630(&DistancePoint_TypeInfo);
    DAT_04566a5a = 1;
  }
  __this_00 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
  DistancePoint___ctor(__this_00,(MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).NDOAINJDMIH;
  *ppPVar1 = __this_00;
  thunk_FUN_01c20e04(ppPVar1,__this_00);
  ActionAnimation___ctor((ActionAnimation_o *)__this,5,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03294a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

