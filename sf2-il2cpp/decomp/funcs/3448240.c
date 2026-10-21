// CGALNIOABHK$$HNIHOIAMDPC @ RVA 0x3448240

void CGALNIOABHK__HNIHOIAMDPC
               (System_Collections_Generic_List_ECENNHNBAME__o *BBNCKLAGHGA,
               System_Collections_Generic_HashSet_string__o *KHIINLPNKPC,
               System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *JAGLGJNPPHA,
               System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN,
               System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO,MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *ELOCKFLGKNO;
  System_Xml_XmlNode_o *OBDMHHJBLKL;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__XmlNode__o **ppSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568244 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Clear__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1534);
    FUN_01bab630(&StringLiteral_12865);
    FUN_01bab630(&StringLiteral_9222);
    FUN_01bab630(&StringLiteral_9225);
    FUN_01bab630(&StringLiteral_13926);
    DAT_04568244 = 1;
  }
  CMCJGLAABFO__GIENGNEGHPJ((MethodInfo *)0x0);
                    /* try { // try from 035482fc to 03648303 has its CatchHandler @ 03548428 */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__AAELNNJNDIF((MethodInfo *)0x0);
                    /* try { // try from 03548318 to 0364831b has its CatchHandler @ 03548420 */
                    /* try { // try from 0354831c to 0364832b has its CatchHandler @ 03548424 */
  method_01 = (MethodInfo *)0x0;
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_1534,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 0354832c to 0364843f has its CatchHandler @ 035481b0 */
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_9225,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      ELOCKFLGKNO = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar2 + 0x468))
                              (plVar2,StringLiteral_12865,*(undefined8 *)(*plVar2 + 0x470));
      plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar1,StringLiteral_9225,
                                  (pSVar1->klass->vtable)._51_get_Item.method);
      if (plVar2 != (long *)0x0) {
        OBDMHHJBLKL = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar2 + 0x468))
                                (plVar2,StringLiteral_9222,*(undefined8 *)(*plVar2 + 0x470));
        plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar1,StringLiteral_9225,
                                    (pSVar1->klass->vtable)._51_get_Item.method);
        if (plVar2 != (long *)0x0) {
          method_00 = *(MethodInfo **)(*plVar2 + 0x470);
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                        (**(code **)(*plVar2 + 0x468))(plVar2,StringLiteral_13926);
          if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
          }
          CGALNIOABHK__FMNBNOCEAHE(ELOCKFLGKNO,JAGLGJNPPHA,method_00);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03548318 with catch @ 03548420
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0354831c with catch @ 03548424
                        */
          CGALNIOABHK__JIOCLOBELJJ
                    (OBDMHHJBLKL,JAGLGJNPPHA,BBNCKLAGHGA,KHIINLPNKPC,LKHHJJJFHGN,method_01);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035482fc with catch @ 03548428
                        */
          CGALNIOABHK__KMMFOCJLFIF(AHDGNOJPPIB,AIEIIIHLDPO,(MethodInfo *)BBNCKLAGHGA);
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   CGALNIOABHK_TypeInfo->static_fields->OJGHOJALHBK;
                    /* try { // try from 03548440 to 03648443 has its CatchHandler @ 0354846c */
          if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 03548444 to 0364847b has its CatchHandler @ 035481b0 */
            System_Collections_Generic_Dictionary<object,_object>__Clear
                      (__this,Method_System_Collections_Generic_Dictionary<string,_XmlNode>_Clear__)
            ;
            ppSVar3 = &CGALNIOABHK_TypeInfo->static_fields->OJGHOJALHBK;
                    /* catch() { ... } // from try @ 03548440 with catch @ 0354846c */
            *ppSVar3 = (System_Collections_Generic_Dictionary_string__XmlNode__o *)0x0;
            thunk_FUN_01c20e04(ppSVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0354847c to 03648483 has its CatchHandler @ 03548498 */
  FUN_01bab8c8();
}

