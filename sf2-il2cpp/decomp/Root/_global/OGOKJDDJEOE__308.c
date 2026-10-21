// TypeDefIndex 308
// Namespace: 
// public class OGOKJDDJEOE : CNIGOFCKBGI
// Fields:
//   private const string MKPFECDBIPN = "_Center";
//   private const string CCHFFGEINJN = "_Radius";
//   private const string PHCKLJNCBLI = "_Shape";
//   private float IDIFGEKMKEJ; // 0x6C
//   private float NEFHCAJOBMB; // 0x70
//   private IEFEBEDLHNN HIIKOFEFMPG; // 0x78
//   private SpriteRenderer AMLBCOCBBPN; // 0x80
//   private static Material BPFKIHDKBOO; // 0x0
//   private static Sprite NNPAAOKBHEH; // 0x8

// ===== public override void EABJNHKPJOM()  [RVA 0x323B370]
// OGOKJDDJEOE$$EABJNHKPJOM @ RVA 0x323B370

void OGOKJDDJEOE__EABJNHKPJOM(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0333b37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
            (__this,0,(__this->klass->vtable)._9_AFBEEALKOPE.method);
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x323B380]
// OGOKJDDJEOE$$.ctor @ RVA 0x323B380

void OGOKJDDJEOE___ctor(OGOKJDDJEOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_0456705c & 1) == 0) {
    FUN_01bab630(&StringLiteral_8441/*"LightRadius"*/);
    FUN_01bab630(&StringLiteral_8444/*"LightShape"*/);
    DAT_0456705c = 1;
  }
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x2a,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8441/*"LightRadius"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.2,(MethodInfo *)0x0);
      *(float *)&(__this->fields).super.field_0x5c = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_8444/*"LightShape"*/,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
        (__this->fields).IDIFGEKMKEJ = fVar3;
        CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DGLJCGNHLIG()  [RVA 0x323B480]
// OGOKJDDJEOE$$DGLJCGNHLIG @ RVA 0x323B480

void OGOKJDDJEOE__DGLJCGNHLIG(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0333b48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
            (__this,1,(__this->klass->vtable)._9_AFBEEALKOPE.method);
  return;
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x323B490]
// OGOKJDDJEOE$$GOGPCNMIJOB @ RVA 0x323B490

CNIGOFCKBGI_o * OGOKJDDJEOE__GOGPCNMIJOB(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  OGOKJDDJEOE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_0456705d & 1) == 0) {
    FUN_01bab630(&OGOKJDDJEOE_TypeInfo);
    DAT_0456705d = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (OGOKJDDJEOE_o *)thunk_FUN_01bda818(OGOKJDDJEOE_TypeInfo,method);
    OGOKJDDJEOE___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (OGOKJDDJEOE_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLCONNGHGKD()  [RVA 0x323B514]
// OGOKJDDJEOE$$LLCONNGHGKD @ RVA 0x323B514

void OGOKJDDJEOE__LLCONNGHGKD(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Material_o *__this_01;
  IEFEBEDLHNN_o *pIVar3;
  FCJBEKHDLAF_o *pFVar4;
  BEPJMNAHCAD_o *pBVar5;
  MNLIBPAOCLG_o *pMVar6;
  KHEDNGODOIC_o *pKVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector4_o value;
  
  if ((DAT_04567060 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_15938/*"_Center"*/);
    DAT_04567060 = 1;
  }
  pUVar1 = (__this->fields).AMLBCOCBBPN;
  if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).AMLBCOCBBPN;
    if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar9 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).AMLBCOCBBPN;
      if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar10 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).AMLBCOCBBPN;
        if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UVar11 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).AMLBCOCBBPN;
          if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            pIVar3 = (__this->fields).HIIKOFEFMPG;
            if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
              UVar12 = CNDPAJOLKFN__ALBJPLAPOBO((pIVar3->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
              if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UVar12.fields.x,UVar12.fields.y,UVar12.fields.z);
              }
              if (DAT_04565b7f == '\0') {
                FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                DAT_04565b7f = '\x01';
              }
              if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
              if (((((pFVar4 != (FCJBEKHDLAF_o *)0x0) &&
                    (pBVar5 = (pFVar4->fields).FAJCMHDLBEJ, pBVar5 != (BEPJMNAHCAD_o *)0x0)) &&
                   (pMVar6 = (pBVar5->fields).LIICCFBEOLC, pMVar6 != (MNLIBPAOCLG_o *)0x0)) &&
                  ((pKVar7 = (pMVar6->fields).ANDGPHHMNMC, pKVar7 != (KHEDNGODOIC_o *)0x0 &&
                   (__this_00 = (pKVar7->fields).LDAKOINICNJ,
                   __this_00 != (UnityEngine_GameObject_o *)0x0)))) &&
                 (pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                 pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                UVar13 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
                pUVar1 = (__this->fields).AMLBCOCBBPN;
                if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    UVar14 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).AMLBCOCBBPN;
                    if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                       (pUVar2 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                      UVar15 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
                      pUVar1 = (__this->fields).AMLBCOCBBPN;
                      if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                         (__this_01 = UnityEngine_Renderer__get_material
                                                ((UnityEngine_Renderer_o *)pUVar1,(MethodInfo *)0x0)
                         , __this_01 != (UnityEngine_Material_o *)0x0)) {
                        value.fields.y =
                             (-(UVar12.fields.y + UVar13.fields.y) -
                             (UVar10.fields.y - UVar11.fields.y * 0.5)) / UVar15.fields.y;
                        value.fields.x =
                             ((UVar12.fields.x + UVar13.fields.x) -
                             (UVar8.fields.x - UVar9.fields.x * 0.5)) / UVar14.fields.x;
                        value.fields.z = 0.0;
                        value.fields.w = 0.0;
                        UnityEngine_Material__SetVector
                                  (__this_01,StringLiteral_15938/*"_Center"*/,value,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Sprite OGOOONHNKEI()  [RVA 0x323B780]
// OGOKJDDJEOE$$OGOOONHNKEI @ RVA 0x323B780

UnityEngine_Sprite_o * OGOKJDDJEOE__OGOOONHNKEI(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Sprite_o *pUVar2;
  UnityEngine_Sprite_o **ppUVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456705e & 1) == 0) {
    FUN_01bab630(&OGOKJDDJEOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    FUN_01bab630(&StringLiteral_12939/*"Textures/misc/Square"*/);
    DAT_0456705e = 1;
  }
  x = (UnityEngine_Object_o *)OGOKJDDJEOE_TypeInfo->static_fields->NNPAAOKBHEH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (UnityEngine_Sprite_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (StringLiteral_12939/*"Textures/misc/Square"*/,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    ppUVar3 = &OGOKJDDJEOE_TypeInfo->static_fields->NNPAAOKBHEH;
    *ppUVar3 = pUVar2;
    thunk_FUN_01c20e04(ppUVar3,pUVar2);
  }
  return OGOKJDDJEOE_TypeInfo->static_fields->NNPAAOKBHEH;
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x323B858]
// OGOKJDDJEOE$$DIGLGKAPOAB @ RVA 0x323B858

void OGOKJDDJEOE__DIGLGKAPOAB(OGOKJDDJEOE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  GBJGJEGPHKD_o *__this_00;
  IEFEBEDLHNN_o *pIVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  OGOKJDDJEOE_o *__this_03;
  UnityEngine_Material_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar4;
  BEPJMNAHCAD_o *pBVar5;
  MNLIBPAOCLG_o *pMVar6;
  FCJBEKHDLAF_o *__this_04;
  UnityEngine_SpriteRenderer_o **ppUVar7;
  UnityEngine_SpriteRenderer_o *pUVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456705f & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_16017/*"_Shape"*/);
    FUN_01bab630(&StringLiteral_16005/*"_Radius"*/);
    DAT_0456705f = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_04 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_04 != (FCJBEKHDLAF_o *)0x0) {
        if (IMMNELPBGIF != (Il2CppObject *)0x0) {
          if ((__this->fields).super.JGJNBILDCHK == 2) {
            pIVar4 = IMMNELPBGIF[1].klass;
          }
          else {
            pIVar4 = IMMNELPBGIF[1].monitor;
          }
          if ((pIVar4 != (Il2CppClass *)0x0) &&
             (__this_00 = (GBJGJEGPHKD_o *)pIVar4->vtable[0x11].method,
             __this_00 != (GBJGJEGPHKD_o *)0x0)) {
            pIVar2 = GBJGJEGPHKD__ILECMJOENMK(__this_00,(MethodInfo *)0x0);
            (__this->fields).HIIKOFEFMPG = pIVar2;
            thunk_FUN_01c20e04();
            FCJBEKHDLAF__KCHJHDCDKGB(__this_04,(MethodInfo *)0x0);
            pBVar5 = (__this_04->fields).FAJCMHDLBEJ;
            if ((pBVar5 != (BEPJMNAHCAD_o *)0x0) &&
               (pMVar6 = (pBVar5->fields).LIICCFBEOLC, pMVar6 != (MNLIBPAOCLG_o *)0x0)) {
              ppUVar7 = &(__this->fields).AMLBCOCBBPN;
              *ppUVar7 = (pMVar6->fields).JNBHKOBOIMD;
              thunk_FUN_01c20e04(ppUVar7);
              if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                 (__this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
                if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                   (__this_02 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0),
                   __this_02 != (UnityEngine_Transform_o *)0x0)) {
                  value.fields.z = 1.0;
                  value.fields.x = 2000.0;
                  value.fields.y = 2000.0;
                  UnityEngine_Transform__set_localScale(__this_02,value,(MethodInfo *)0x0);
                  pUVar8 = *ppUVar7;
                  pUVar3 = OGOKJDDJEOE__KPHMCGKMLEN(__this_03,method_00);
                  if (pUVar8 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    UnityEngine_Renderer__set_material
                              ((UnityEngine_Renderer_o *)pUVar8,pUVar3,(MethodInfo *)0x0);
                    if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                       (pUVar3 = UnityEngine_Renderer__get_material
                                           ((UnityEngine_Renderer_o *)*ppUVar7,(MethodInfo *)0x0),
                       pUVar3 != (UnityEngine_Material_o *)0x0)) {
                      UnityEngine_Material__SetFloat
                                (pUVar3,StringLiteral_16005/*"_Radius"*/,
                                 *(float *)&(__this->fields).super.field_0x5c,(MethodInfo *)0x0);
                      pUVar8 = (__this->fields).AMLBCOCBBPN;
                      if ((pUVar8 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                         (pUVar3 = UnityEngine_Renderer__get_material
                                             ((UnityEngine_Renderer_o *)pUVar8,(MethodInfo *)0x0),
                         pUVar3 != (UnityEngine_Material_o *)0x0)) {
                        UnityEngine_Material__SetFloat
                                  (pUVar3,StringLiteral_16017/*"_Shape"*/,(__this->fields).IDIFGEKMKEJ,
                                   (MethodInfo *)0x0);
                        OGOKJDDJEOE__JJPNGMPBFKL(__this,method_01);
                        return;
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
    }
  }
  return;
}


// ===== private void JJPNGMPBFKL()  [RVA 0x323B518]
// OGOKJDDJEOE$$JJPNGMPBFKL @ RVA 0x323B518

void OGOKJDDJEOE__JJPNGMPBFKL(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Material_o *__this_01;
  IEFEBEDLHNN_o *pIVar3;
  FCJBEKHDLAF_o *pFVar4;
  BEPJMNAHCAD_o *pBVar5;
  MNLIBPAOCLG_o *pMVar6;
  KHEDNGODOIC_o *pKVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector4_o value;
  
  if ((DAT_04567060 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_15938/*"_Center"*/);
    DAT_04567060 = 1;
  }
  pUVar1 = (__this->fields).AMLBCOCBBPN;
  if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).AMLBCOCBBPN;
    if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar9 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).AMLBCOCBBPN;
      if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        UVar10 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).AMLBCOCBBPN;
        if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UVar11 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).AMLBCOCBBPN;
          if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            pIVar3 = (__this->fields).HIIKOFEFMPG;
            if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
              UVar12 = CNDPAJOLKFN__ALBJPLAPOBO((pIVar3->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
              if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UVar12.fields.x,UVar12.fields.y,UVar12.fields.z);
              }
              if (DAT_04565b7f == '\0') {
                FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                DAT_04565b7f = '\x01';
              }
              if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
              if (((((pFVar4 != (FCJBEKHDLAF_o *)0x0) &&
                    (pBVar5 = (pFVar4->fields).FAJCMHDLBEJ, pBVar5 != (BEPJMNAHCAD_o *)0x0)) &&
                   (pMVar6 = (pBVar5->fields).LIICCFBEOLC, pMVar6 != (MNLIBPAOCLG_o *)0x0)) &&
                  ((pKVar7 = (pMVar6->fields).ANDGPHHMNMC, pKVar7 != (KHEDNGODOIC_o *)0x0 &&
                   (__this_00 = (pKVar7->fields).LDAKOINICNJ,
                   __this_00 != (UnityEngine_GameObject_o *)0x0)))) &&
                 (pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                 pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                UVar13 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
                pUVar1 = (__this->fields).AMLBCOCBBPN;
                if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    UVar14 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields).AMLBCOCBBPN;
                    if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                       (pUVar2 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                      UVar15 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0);
                      pUVar1 = (__this->fields).AMLBCOCBBPN;
                      if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                         (__this_01 = UnityEngine_Renderer__get_material
                                                ((UnityEngine_Renderer_o *)pUVar1,(MethodInfo *)0x0)
                         , __this_01 != (UnityEngine_Material_o *)0x0)) {
                        value.fields.y =
                             (-(UVar12.fields.y + UVar13.fields.y) -
                             (UVar10.fields.y - UVar11.fields.y * 0.5)) / UVar15.fields.y;
                        value.fields.x =
                             ((UVar12.fields.x + UVar13.fields.x) -
                             (UVar8.fields.x - UVar9.fields.x * 0.5)) / UVar14.fields.x;
                        value.fields.z = 0.0;
                        value.fields.w = 0.0;
                        UnityEngine_Material__SetVector
                                  (__this_01,StringLiteral_15938/*"_Center"*/,value,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Material KPHMCGKMLEN()  [RVA 0x323BAA0]
// OGOKJDDJEOE$$KPHMCGKMLEN @ RVA 0x323BAA0

UnityEngine_Material_o * OGOKJDDJEOE__KPHMCGKMLEN(OGOKJDDJEOE_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567061 & 1) == 0) {
    FUN_01bab630(&OGOKJDDJEOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Material>__);
    FUN_01bab630(&StringLiteral_8867/*"Materials/Hole"*/);
    DAT_04567061 = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)OGOKJDDJEOE_TypeInfo->static_fields->BPFKIHDKBOO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (UnityEngine_Material_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (StringLiteral_8867/*"Materials/Hole"*/,Method_UnityEngine_ResourcesAndBundles_Load<Material>__);
    OGOKJDDJEOE_TypeInfo->static_fields->BPFKIHDKBOO = pUVar2;
    thunk_FUN_01c20e04(OGOKJDDJEOE_TypeInfo->static_fields,pUVar2);
  }
  return OGOKJDDJEOE_TypeInfo->static_fields->BPFKIHDKBOO;
}

