// PAMEPBLOLPB$$.ctor @ RVA 0x3020EEC

void PAMEPBLOLPB___ctor(PAMEPBLOLPB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  AFFHKININGD_o **ppAVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  int64_t iVar8;
  System_String_o **ppSVar9;
  PAMEPBLOLPB_Fields *pPVar10;
  
  if ((DAT_04565c4c & 1) == 0) {
    FUN_01bab630(&StringLiteral_12431);
    FUN_01bab630(&StringLiteral_4543);
    FUN_01bab630(&StringLiteral_11010);
    FUN_01bab630(&StringLiteral_13797);
    FUN_01bab630(&StringLiteral_1325);
    FUN_01bab630(&StringLiteral_1322);
    FUN_01bab630(&StringLiteral_5620);
    FUN_01bab630(&StringLiteral_4544);
    FUN_01bab630(&StringLiteral_5621);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_8677);
    FUN_01bab630(&StringLiteral_11013);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_11006);
    FUN_01bab630(&StringLiteral_7235);
    FUN_01bab630(&StringLiteral_7230);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04565c4c = 1;
  }
  ppSVar9 = &(__this->fields).NEEIBKGPKBK;
  *ppSVar9 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar9);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BGFEJOHINAG = 0;
  (__this->fields).GKGHELAOIBG = -1;
  ppAVar3 = &(__this->fields).JFFPIOMOOPF;
  *ppAVar3 = (AFFHKININGD_o *)0x0;
  thunk_FUN_01c20e04(ppAVar3,0);
  pPVar10 = &__this->fields;
  pPVar10->HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(pPVar10,AHDGNOJPPIB);
  pSVar4 = pPVar10->HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_7230,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD(pPVar10->HJKLIDCAEOE,StringLiteral_7230,(MethodInfo *)0x0)
        ;
        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar6,StringLiteral_1322,(pSVar6->klass->vtable)._10_set_Value.method);
      }
      pSVar4 = pPVar10->HJKLIDCAEOE;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_7235,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
          if (bVar1) {
            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                               (pPVar10->HJKLIDCAEOE,StringLiteral_7235,(MethodInfo *)0x0);
            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar6,StringLiteral_1325,(pSVar6->klass->vtable)._10_set_Value.method);
          }
          pSVar4 = pPVar10->HJKLIDCAEOE;
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_4543,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
              if (bVar1) {
                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                   (pPVar10->HJKLIDCAEOE,StringLiteral_4543,(MethodInfo *)0x0);
                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar6,StringLiteral_1567,(pSVar6->klass->vtable)._10_set_Value.method);
              }
              pSVar4 = pPVar10->HJKLIDCAEOE;
              if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar5,StringLiteral_8677,(MethodInfo *)0x0);
                  bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                  if (bVar1) {
                    pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                       (pPVar10->HJKLIDCAEOE,StringLiteral_8677,(MethodInfo *)0x0);
                    if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                    (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                              (pSVar6,StringLiteral_1567,
                               (pSVar6->klass->vtable)._10_set_Value.method);
                  }
                  pSVar4 = pPVar10->HJKLIDCAEOE;
                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar5,StringLiteral_5620,(MethodInfo *)0x0);
                      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                      if (bVar1) {
                        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                           (pPVar10->HJKLIDCAEOE,StringLiteral_5620,
                                            (MethodInfo *)0x0);
                        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                  (pSVar6,StringLiteral_1567,
                                   (pSVar6->klass->vtable)._10_set_Value.method);
                      }
                      pSVar4 = pPVar10->HJKLIDCAEOE;
                      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method
                                           );
                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar5,StringLiteral_5621,(MethodInfo *)0x0);
                          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                          if (bVar1) {
                            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                               (pPVar10->HJKLIDCAEOE,StringLiteral_5621,
                                                (MethodInfo *)0x0);
                            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                      (pSVar6,StringLiteral_1567,
                                       (pSVar6->klass->vtable)._10_set_Value.method);
                          }
                          pSVar4 = pPVar10->HJKLIDCAEOE;
                          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.
                                                       method);
                            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar5,StringLiteral_12431,(MethodInfo *)0x0);
                              bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                              if (bVar1) {
                                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                   (pPVar10->HJKLIDCAEOE,StringLiteral_12431,
                                                    (MethodInfo *)0x0);
                                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                          (pSVar6,StringLiteral_1567,
                                           (pSVar6->klass->vtable)._10_set_Value.method);
                              }
                              pSVar4 = pPVar10->HJKLIDCAEOE;
                              if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                         (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                                   (pSVar4,(pSVar4->klass->vtable).
                                                           _16_get_Attributes.method);
                                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar5,StringLiteral_4544,(MethodInfo *)0x0);
                                  bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                                  if (bVar1) {
                                    pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                       (pPVar10->HJKLIDCAEOE,StringLiteral_4544,
                                                        (MethodInfo *)0x0);
                                    if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                    goto LAB_031217f0;
                                    (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                              (pSVar6,StringLiteral_1567,
                                               (pSVar6->klass->vtable)._10_set_Value.method);
                                  }
                                  pSVar4 = pPVar10->HJKLIDCAEOE;
                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                                       (pSVar4,(pSVar4->klass->vtable).
                                                               _16_get_Attributes.method);
                                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar5,StringLiteral_13797,
                                                          (MethodInfo *)0x0);
                                      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                                      if (bVar1) {
                                        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                           (pPVar10->HJKLIDCAEOE,StringLiteral_13797
                                                            ,(MethodInfo *)0x0);
                                        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                        goto LAB_031217f0;
                                        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                                  (pSVar6,StringLiteral_1567,
                                                   (pSVar6->klass->vtable)._10_set_Value.method);
                                      }
                                      pSVar4 = pPVar10->HJKLIDCAEOE;
                                      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                 (*(pSVar4->klass->vtable)._16_get_Attributes.
                                                   methodPtr)(pSVar4,(pSVar4->klass->vtable).
                                                                     _16_get_Attributes.method);
                                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                             (pSVar5,StringLiteral_11013,
                                                              (MethodInfo *)0x0);
                                          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0)
                                          ;
                                          if (bVar1) {
                                            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                               (pPVar10->HJKLIDCAEOE,
                                                                StringLiteral_11013,
                                                                (MethodInfo *)0x0);
                                            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                            goto LAB_031217f0;
                                            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                                      (pSVar6,StringLiteral_1567,
                                                       (pSVar6->klass->vtable)._10_set_Value.method)
                                            ;
                                          }
                                          pSVar4 = pPVar10->HJKLIDCAEOE;
                                          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                     (*(pSVar4->klass->vtable)._16_get_Attributes.
                                                       methodPtr)(pSVar4,(pSVar4->klass->vtable).
                                                                         _16_get_Attributes.method);
                                            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0
                                               ) {
                                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                                 (pSVar5,StringLiteral_8409,
                                                                  (MethodInfo *)0x0);
                                              bVar1 = EIABCPKDEBD__OBECCOPBADO
                                                                (pSVar6,(MethodInfo *)0x0);
                                              if (bVar1) {
                                                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                                   (pPVar10->HJKLIDCAEOE,
                                                                    StringLiteral_8409,
                                                                    (MethodInfo *)0x0);
                                                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                                goto LAB_031217f0;
                                                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                                          (pSVar6,StringLiteral_1567,
                                                           (pSVar6->klass->vtable)._10_set_Value.
                                                           method);
                                              }
                                              pSVar4 = pPVar10->HJKLIDCAEOE;
                                              if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                         (*(pSVar4->klass->vtable).
                                                           _16_get_Attributes.methodPtr)
                                                                   (pSVar4,(pSVar4->klass->vtable).
                                                                           _16_get_Attributes.method
                                                                   );
                                                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *
                                                              )0x0) {
                                                  pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_7235,
                                                             (MethodInfo *)0x0);
                                                  pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                                                                     (pSVar6,StringLiteral_1,
                                                                      (MethodInfo *)0x0);
                                                  *ppSVar9 = pSVar7;
                                                  thunk_FUN_01c20e04(ppSVar9,pSVar7);
                                                  pSVar4 = pPVar10->HJKLIDCAEOE;
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                             (*(pSVar4->klass->vtable).
                                                               _16_get_Attributes.methodPtr)
                                                                       (pSVar4,(pSVar4->klass->
                                                                               vtable).
                                                  _16_get_Attributes.method);
                                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_7230,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).GPIIGPOLINL = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_4543,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).AAECGBAMDEL = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_8677,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).KHIBOGMCNJA = iVar2;
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                             (*(pSVar4->klass->vtable).
                                                               _16_get_Attributes.methodPtr)
                                                                       (pSVar4,(pSVar4->klass->
                                                                               vtable).
                                                  _16_get_Attributes.method);
                                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_5620,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).EMDEPINBPMF = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_5621,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).NFGAGEIDGPJ = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_13797,
                                                             (MethodInfo *)0x0);
                                                  iVar8 = EIABCPKDEBD__HNIGPBMJJOL
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).DKMPMFFECBK = iVar8;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_11013,
                                                             (MethodInfo *)0x0);
                                                  iVar8 = EIABCPKDEBD__HNIGPBMJJOL
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).JJDACOBBFNB = iVar8;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_12431,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).PDGFJEOGJOB = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_8409,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).GHPHFGBIPCI = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_11006,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).IKGEDJDFCBA = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_11010,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  (__this->fields).KOANEAEMOOP = iVar2;
                                                  (__this->fields).KFBMNNNBMEL = 0;
                                                  (__this->fields).DCNLAEJAKIE =
                                                       (__this->fields).IKGEDJDFCBA != 0 ||
                                                       iVar2 != 0;
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
          }
        }
      }
    }
  }
LAB_031217f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

