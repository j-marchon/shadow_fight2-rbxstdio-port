// TypeDefIndex 1201
// Namespace: 
// public class CPAJCJHOLEJ
// Fields:
//   private string OEIHJCIGMEE; // 0x10
//   private string PKNGDBGLNEO; // 0x18
//   private Vector2 MFHFOFFEDJB; // 0x20
//   private float DLBNEPHLCOO; // 0x28
//   public LCAJGLLBBEC.ELJAALFNLIP LOAFPIOGJAF; // 0x2C
//   private bool NGMDFNDFLFL; // 0x30
//   private ModelNode GMAKBKOBGPK; // 0x38
//   private ModelNode NLCJBEOFPKD; // 0x40
//   private NJPBHDMCLIN.KLLGIFHMMIP GDEGFMOJMMN; // 0x48
//   private bool MKDMJMPDKDK; // 0x50

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3129954]
// CPAJCJHOLEJ$$.ctor @ RVA 0x3129954

void CPAJCJHOLEJ___ctor(CPAJCJHOLEJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CPAJCJHOLEJ__HNIHOIAMDPC(__this,AHDGNOJPPIB,method);
  return;
}


// ===== private void CGPGHOGPJBM(Model BCKBBGCOMJD)  [RVA 0x3129C10]
// CPAJCJHOLEJ$$CGPGHOGPJBM @ RVA 0x3129C10

void CPAJCJHOLEJ__CGPGHOGPJBM(CPAJCJHOLEJ_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  int32_t DPJIDNBJIBG_00;
  uint index;
  uint index_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar1;
  ModelNode_o *pIVar2;
  ModelNode_o **ppIVar3;
  ModelObject_o *__this_00;
  
  if ((DAT_04566686 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>_get_Item__);
    DAT_04566686 = 1;
  }
  if ((BCKBBGCOMJD != (Model_o *)0x0) &&
     (__this_00 = (BCKBBGCOMJD->fields).HMIAFJALFCJ, __this_00 != (ModelObject_o *)0x0)) {
    DPJIDNBJIBG = ModelObject__HBCACOFLPCI(__this_00,(__this->fields).OEIHJCIGMEE,(MethodInfo *)0x0)
    ;
    DPJIDNBJIBG_00 =
         ModelObject__HBCACOFLPCI(__this_00,(__this->fields).PKNGDBGLNEO,(MethodInfo *)0x0);
    index = ModelObject__HDEBEPGIFCJ(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    index_00 = ModelObject__HDEBEPGIFCJ(__this_00,DPJIDNBJIBG_00,(MethodInfo *)0x0);
    if ((index & index_00) == 0xffffffff) {
      return;
    }
    pSVar1 = ModelObject__HMAAHELNECD(__this_00,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      pIVar2 = (ModelNode_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<ModelNode>_get_Item__);
      (__this->fields).GMAKBKOBGPK = pIVar2;
      thunk_FUN_01c20e04();
      pSVar1 = ModelObject__HMAAHELNECD(__this_00,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
        pIVar2 = (ModelNode_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<ModelNode>_get_Item__);
        ppIVar3 = &(__this->fields).NLCJBEOFPKD;
        *ppIVar3 = pIVar2;
        thunk_FUN_01c20e04(ppIVar3,pIVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JOIJDAIICIP(Model BCKBBGCOMJD)  [RVA 0x3129D2C]
// CPAJCJHOLEJ$$JOIJDAIICIP @ RVA 0x3129D2C

void CPAJCJHOLEJ__JOIJDAIICIP(CPAJCJHOLEJ_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  ModelAnimation_o *pOVar2;
  
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    method_00 = (MethodInfo *)
                CPAJCJHOLEJ__JHBMNNPHEPD(__this,(BCKBBGCOMJD->fields).FNEAAHOOHAA,method);
    if (method_00 != (MethodInfo *)0x0) {
      if (method_00 != (MethodInfo *)(__this->fields).GDEGFMOJMMN) {
        (__this->fields).GDEGFMOJMMN = (NJPBHDMCLIN_KLLGIFHMMIP_o *)method_00;
        thunk_FUN_01c20e04();
        CPAJCJHOLEJ__BMHCAPDENBL(__this,method_01);
        method_00 = extraout_x1;
      }
      if ((__this->fields).NGMDFNDFLFL != false) {
        pOVar2 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
        if (pOVar2 == (ModelAnimation_o *)0x0) goto LAB_03229dc0;
        bVar1 = (pOVar2->fields).IOGCGDKKILK;
        if ((__this->fields).MKDMJMPDKDK != bVar1) {
          if (bVar1 == false) {
            CPAJCJHOLEJ__BMHCAPDENBL(__this,method_00);
            (__this->fields).MKDMJMPDKDK = false;
          }
          else {
            CPAJCJHOLEJ__CGPGHOGPJBM(__this,BCKBBGCOMJD,method);
            (__this->fields).MKDMJMPDKDK = true;
          }
        }
      }
    }
    return;
  }
LAB_03229dc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3129980]
// CPAJCJHOLEJ$$HNIHOIAMDPC @ RVA 0x3129980

void CPAJCJHOLEJ__HNIHOIAMDPC
               (CPAJCJHOLEJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  System_Nullable_Vector2__o SVar8;
  
  if ((DAT_04566687 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Vector2>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&StringLiteral_9816/*"OffsetVector"*/);
    FUN_01bab630(&StringLiteral_11422/*"RootPoint"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_12369/*"StartRotAngle"*/);
    FUN_01bab630(&StringLiteral_9638/*"Null"*/);
    FUN_01bab630(&StringLiteral_8005/*"IsMirrored"*/);
    FUN_01bab630(&StringLiteral_3159/*"AttachPoint"*/);
    DAT_04566687 = 1;
  }
  pSVar5 = StringLiteral_9638/*"Null"*/;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03229c0c;
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
    pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_9638/*"Null"*/,(MethodInfo *)0x0);
  }
  iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar5,(MethodInfo *)0x0);
  if (((__this != (CPAJCJHOLEJ_o *)0x0) &&
      ((__this->fields).LOAFPIOGJAF = iVar2, AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_11422/*"RootPoint"*/,(MethodInfo *)0x0);
    pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
    (__this->fields).OEIHJCIGMEE = pSVar5;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_3159/*"AttachPoint"*/,(MethodInfo *)0x0);
      pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).PKNGDBGLNEO = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_12369/*"StartRotAngle"*/,(MethodInfo *)0x0);
        fVar6 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar4,0.0,(MethodInfo *)0x0);
        (__this->fields).DLBNEPHLCOO = fVar6;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9816/*"OffsetVector"*/,(MethodInfo *)0x0);
          SVar8 = GIAMPEGMNHE__JHLNBAHDGPI(pSVar4,(MethodInfo *)0x0);
          if ((SVar8.fields._0_8_ & 0xff) == 0) {
            if (DAT_0455fa75 == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa75 = '\x01';
            }
            UVar7 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
          }
          else {
            UVar7 = (UnityEngine_Vector2_Fields)SVar8.fields.value.fields;
          }
          (__this->fields).MFHFOFFEDJB.fields = UVar7;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_8005/*"IsMirrored"*/,(MethodInfo *)0x0);
            bVar1 = GIAMPEGMNHE__FAEBPLENEGK(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).NGMDFNDFLFL = bVar1;
            return;
          }
        }
      }
    }
  }
LAB_03229c0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLCONNGHGKD(Model BCKBBGCOMJD, GameObject PBDIPLHDHHD)  [RVA 0x3129FE8]
// CPAJCJHOLEJ$$LLCONNGHGKD @ RVA 0x3129FE8

void CPAJCJHOLEJ__LLCONNGHGKD
               (CPAJCJHOLEJ_o *__this,Model_o *BCKBBGCOMJD,
               UnityEngine_GameObject_o *PBDIPLHDHHD,MethodInfo *method)

{
  int32_t iVar1;
  Vector3f_o *PHCOHKNFGLE;
  UnityEngine_Transform_o *pUVar2;
  ModelNode_o *pIVar3;
  ModelNode_o *pIVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  float local_28;
  float fStack_24;
  
  CPAJCJHOLEJ__JOIJDAIICIP(__this,BCKBBGCOMJD,(MethodInfo *)PBDIPLHDHHD);
  pIVar3 = (__this->fields).NLCJBEOFPKD;
  if ((pIVar3 == (ModelNode_o *)0x0) ||
     (pIVar4 = (__this->fields).GMAKBKOBGPK, pIVar4 == (ModelNode_o *)0x0)) {
    return;
  }
  PHCOHKNFGLE = Vector3f__MPOCFELGHDK
                          ((pIVar3->fields).CNMHHKAMGPI,(pIVar4->fields).CNMHHKAMGPI,
                           (MethodInfo *)0x0);
  UVar11 = Vector3f__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  fVar8 = UVar11.fields.y;
  fVar7 = UVar11.fields.x;
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    fVar9 = (__this->fields).MFHFOFFEDJB.fields.x;
    fVar5 = (__this->fields).MFHFOFFEDJB.fields.y;
    iVar1 = Model__MALPGCALHNK(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (DAT_04560001 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_04560001 = '\x01';
    }
    fVar10 = (UnityEngine_Vector2_TypeInfo->static_fields->rightVector).fields.x;
    fVar6 = (UnityEngine_Vector2_TypeInfo->static_fields->rightVector).fields.y;
    if (DAT_045602fb == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_045602fb = '\x01';
    }
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __x = atan2f(fVar8,fVar7);
    sincosf(__x,&fStack_24,&local_28);
    pIVar3 = (__this->fields).GMAKBKOBGPK;
    if (pIVar3 != (ModelNode_o *)0x0) {
      UVar11 = Vector3f__ALBJPLAPOBO((pIVar3->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      if ((PBDIPLHDHHD != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar2 = UnityEngine_GameObject__get_transform(PBDIPLHDHHD,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        fVar8 = SQRT(fVar7 * fVar7 + fVar8 * fVar8);
        fVar7 = fVar5 * (float)iVar1 + fVar8 * fVar6;
        fVar9 = fVar9 + fVar8 * fVar10;
        value.fields.y = fVar9 * fStack_24 + fVar7 * local_28 + UVar11.fields.y;
        value.fields.x = (fVar9 * local_28 - fVar7 * fStack_24) + UVar11.fields.x;
        value.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
        fVar7 = (__this->fields).DLBNEPHLCOO;
        if (DAT_0455fb9d == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fb9d = '\x01';
        }
        value_00 = UnityEngine_Quaternion__AngleAxis
                             (__x * 57.29578 + fVar7,
                              (UnityEngine_Vector3_o)
                              (UnityEngine_Vector3_TypeInfo->static_fields->forwardVector).fields,
                              (MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(PBDIPLHDHHD,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localRotation(pUVar2,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected NJPBHDMCLIN.KLLGIFHMMIP JHBMNNPHEPD(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3129DC4]
// CPAJCJHOLEJ$$JHBMNNPHEPD @ RVA 0x3129DC4

/* WARNING: Type propagation algorithm not settling */

NJPBHDMCLIN_KLLGIFHMMIP_o *
CPAJCJHOLEJ__JHBMNNPHEPD(CPAJCJHOLEJ_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04566688 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5569/*"ERROR: DistancePoint.DistanceObject.getPosition - unknown model: {0}"*/);
    DAT_04566688 = 1;
  }
  switch((__this->fields).LOAFPIOGJAF) {
  case 0:
  case 1:
    goto joined_r0x03229f08;
  case 2:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).PFFLOCBGFCH;
    }
    break;
  case 3:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).PFDEJKDOAGL;
    }
    break;
  case 4:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).GCKCPJILFGB;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).LOAFPIOGJAF;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) break;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5569/*"ERROR: DistancePoint.DistanceObject.getPosition - unknown model: {0}"*/,args,(MethodInfo *)0x0);
joined_r0x03229f08:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).BEMCNJHEADJ;
    }
    break;
  case 6:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).EBLHLNKKBEO;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BMHCAPDENBL()  [RVA 0x3129F40]
// CPAJCJHOLEJ$$BMHCAPDENBL @ RVA 0x3129F40

void CPAJCJHOLEJ__BMHCAPDENBL(CPAJCJHOLEJ_o *__this,MethodInfo *method)

{
  ModelObject_o *pGVar1;
  ModelNode_o *pIVar2;
  CPAJCJHOLEJ_o *pCVar3;
  NJPBHDMCLIN_KLLGIFHMMIP_o *pNVar4;
  ModelNode_o **ppIVar5;
  undefined1 auVar6 [16];
  
  pNVar4 = (__this->fields).GDEGFMOJMMN;
  pCVar3 = __this;
  if ((pNVar4 != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) &&
     (pGVar1 = (pNVar4->fields).DBFCHBBKIHK, pCVar3 = (CPAJCJHOLEJ_o *)0x0,
     pGVar1 != (ModelObject_o *)0x0)) {
    pIVar2 = ModelObject__OCJAHBKIFNO(pGVar1,(__this->fields).OEIHJCIGMEE,(MethodInfo *)0x0);
    ppIVar5 = &(__this->fields).GMAKBKOBGPK;
    *ppIVar5 = pIVar2;
    auVar6 = thunk_FUN_01c20e04(ppIVar5,pIVar2);
    method = auVar6._8_8_;
    pCVar3 = auVar6._0_8_;
    pNVar4 = (__this->fields).GDEGFMOJMMN;
    if ((pNVar4 != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) &&
       (pGVar1 = (pNVar4->fields).DBFCHBBKIHK, pCVar3 = (CPAJCJHOLEJ_o *)0x0,
       pGVar1 != (ModelObject_o *)0x0)) {
      pIVar2 = ModelObject__OCJAHBKIFNO(pGVar1,(__this->fields).PKNGDBGLNEO,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).NLCJBEOFPKD;
      *ppIVar5 = pIVar2;
      thunk_FUN_01c20e04(ppIVar5,pIVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pCVar3,method);
}

