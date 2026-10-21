// TypeDefIndex 3165
// Namespace: 
// public static class ANFOHCGLHID
// Fields:
//   private const string PIILPIGDAHL = "VibrationSettings";
//   private static ANFOHCGLHID.HLMLMHPDHOG LLPDICNBKEI; // 0x0
//   private static bool AEFEDMKJKJE; // 0x8
//   private static List<DBGBHDDCAJC> GGBLEBGGDFH; // 0x10

// ===== private static void OLGAHLHLCKH()  [RVA 0x34DC54C]
// ANFOHCGLHID$$OLGAHLHLCKH @ RVA 0x34DC54C

void ANFOHCGLHID__OLGAHLHLCKH(MethodInfo *method)

{
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this;
  
  if ((DAT_04568720 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568720 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
  if (__this != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
    MGNPHCAAEIO_FGHBAEIKNBF__DGLJCGNHLIG(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FOGOMNAOMBD()  [RVA 0x34DC5B0]
// ANFOHCGLHID$$FOGOMNAOMBD @ RVA 0x34DC5B0

void ANFOHCGLHID__FOGOMNAOMBD(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04568721 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_2720/*"Achievements"*/);
    FUN_01bab630(&StringLiteral_5587/*"ERROR: loadAchievements - wrong file"*/);
    FUN_01bab630(&StringLiteral_5586/*"ERROR: loadAchievements - file Achievements.xml doesn't exist"*/);
    FUN_01bab630(&StringLiteral_2721/*"Achievements.xml"*/);
    DAT_04568721 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_2721/*"Achievements.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlDocument_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5586/*"ERROR: loadAchievements - file Achievements.xml doesn't exist"*/;
  }
  else {
    auVar3 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_2720/*"Achievements"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    method_00 = auVar3._8_8_;
    if (auVar3._0_8_ != (System_Xml_XmlNode_o *)0x0) {
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      ANFOHCGLHID__FKKLOIFLEOG(auVar3._0_8_,method_00);
      return;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5587/*"ERROR: loadAchievements - wrong file"*/;
  }
  UnityEngine_Debug__Log((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
  return;
}


// ===== public static void HNAFEENBKLL()  [RVA 0x34DC778]
// ANFOHCGLHID$$HNAFEENBKLL @ RVA 0x34DC778

void ANFOHCGLHID__HNAFEENBKLL(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  CFGLKHFFEKA_o *__this;
  CFGLKHFFEKA_o *__this_00;
  CFGLKHFFEKA_o *__this_01;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  long lVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  ANFOHCGLHID_HLMLMHPDHOG_o *pAVar13;
  ANFOHCGLHID_c *pAVar14;
  
                    /* try { // try from 035dc784 to 036dc8eb has its CatchHandler @ 035dc784
                       catch() { ... } // from try @ 035dc784 with catch @ 035dc784
                       catch() { ... } // from try @ 035dc958 with catch @ 035dc784
                       catch() { ... } // from try @ 035dc9ac with catch @ 035dc784
                       catch() { ... } // from try @ 035dc9f0 with catch @ 035dc784
                       catch() { ... } // from try @ 035dca20 with catch @ 035dc784 */
  if ((DAT_04568722 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_17);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3553);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3554);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3555);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3556);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3557);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3558);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3559);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3560);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3561);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3562);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3563);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3564);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3565);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3566);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3567);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3568);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3569);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3570);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3571);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3572);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3573);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3574);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3575);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3576);
                    /* try { // try from 035dc8ec to 036dc8f3 has its CatchHandler @ 035dc9d4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3577);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3578);
                    /* try { // try from 035dc90c to 036dc90f has its CatchHandler @ 035dc9cc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3579);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3580);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3581);
                    /* try { // try from 035dc928 to 036dc92f has its CatchHandler @ 035dc9b4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3582);
                    /* try { // try from 035dc93c to 036dc947 has its CatchHandler @ 035dc9d0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3583);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3584);
                    /* try { // try from 035dc94c to 036dc957 has its CatchHandler @ 035dc9c8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3585);
                    /* try { // try from 035dc958 to 036dc997 has its CatchHandler @ 035dc784 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3586);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3587);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3588);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3589);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3590);
                    /* try { // try from 035dc998 to 036dc99b has its CatchHandler @ 035dc9c4 */
                    /* try { // try from 035dc99c to 036dc99f has its CatchHandler @ 035dc9c0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3591);
                    /* try { // try from 035dc9a0 to 036dc9a3 has its CatchHandler @ 035dc9bc */
                    /* try { // try from 035dc9a4 to 036dc9a7 has its CatchHandler @ 035dc9b8 */
                    /* try { // try from 035dc9a8 to 036dc9ab has its CatchHandler @ 035dc9b0 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 035dc9ac to 036dc9eb has its CatchHandler @ 035dc784 */
                    /* catch() { ... } // from try @ 035dc9a8 with catch @ 035dc9b0 */
                    /* catch() { ... } // from try @ 035dc928 with catch @ 035dc9b4 */
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
                    /* catch() { ... } // from try @ 035dc9a4 with catch @ 035dc9b8 */
                    /* catch() { ... } // from try @ 035dc9a0 with catch @ 035dc9bc */
                    /* catch() { ... } // from try @ 035dc99c with catch @ 035dc9c0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 035dc998 with catch @ 035dc9c4 */
                    /* catch() { ... } // from try @ 035dc94c with catch @ 035dc9c8 */
                    /* catch() { ... } // from try @ 035dc90c with catch @ 035dc9cc */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* catch() { ... } // from try @ 035dc93c with catch @ 035dc9d0 */
                    /* catch() { ... } // from try @ 035dc8ec with catch @ 035dc9d4 */
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
                    /* try { // try from 035dc9ec to 036dc9ef has its CatchHandler @ 035dca10 */
                    /* try { // try from 035dc9f0 to 036dca17 has its CatchHandler @ 035dc784 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568722 = 1;
  }
                    /* catch() { ... } // from try @ 035dc9ec with catch @ 035dca10 */
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 035dca18 to 036dca1f has its CatchHandler @ 035dca34 */
  }
                    /* try { // try from 035dca20 to 036dca2b has its CatchHandler @ 035dc784 */
  pAVar13 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
  if (pAVar13 == (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) goto LAB_035dd6f8;
                    /* try { // try from 035dca2c to 036dca33 has its CatchHandler @ 035dca34 */
  (pAVar13->fields).BGGCAGBJCLA = false;
  (pAVar13->fields).DMFPEAIGCBF = false;
                    /* catch() { ... } // from try @ 035dca18 with catch @ 035dca34
                       catch() { ... } // from try @ 035dca2c with catch @ 035dca34 */
                    /* try { // try from 035dca38 to 036dcb7f has its CatchHandler @ 035dca38
                       catch() { ... } // from try @ 035dca38 with catch @ 035dca38
                       catch() { ... } // from try @ 035dcbac with catch @ 035dca38
                       catch() { ... } // from try @ 035dcc20 with catch @ 035dca38
                       catch() { ... } // from try @ 035dcc48 with catch @ 035dca38
                       catch() { ... } // from try @ 035dcc88 with catch @ 035dca38 */
  __this = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
  CFGLKHFFEKA___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
  CFGLKHFFEKA___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
  CFGLKHFFEKA___ctor(__this_01,(MethodInfo *)0x0);
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = UnityEngine_Application__get_version((MethodInfo *)0x0);
  if ((pSVar3 == (System_String_o *)0x0) ||
     (pSVar3 = (System_String_o *)
               (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._3_ToString.method),
     __this == (CFGLKHFFEKA_o *)0x0)) goto LAB_035dd6f8;
  CFGLKHFFEKA__JAGMOPPIMKB(__this,pSVar3,(MethodInfo *)0x0);
  CFGLKHFFEKA__DPCIGEKBJBA(__this,0,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3553,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_17,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
  }
  pSVar6 = CFGLKHFFEKA__ALBJPLAPOBO(__this,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,pSVar6,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 035dcb80 to 036dcb87 has its CatchHandler @ 035dcc2c */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035dcba8 to 036dcbab has its CatchHandler @ 035dcc28 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035dcbac to 036dcc1b has its CatchHandler @ 035dca38 */
  pSVar3 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3554,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3555,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  EKEMDOEAFHP = GIAMPEGMNHE__GMNIIJJFIJK(pSVar3,pSVar6,0,true,(MethodInfo *)0x0);
                    /* try { // try from 035dcc1c to 036dcc1f has its CatchHandler @ 035dcc24 */
                    /* try { // try from 035dcc20 to 036dcc43 has its CatchHandler @ 035dca38 */
  if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3556,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3557,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    EKEMDOEAFHP = GIAMPEGMNHE__GMNIIJJFIJK(pSVar3,pSVar6,0,true,(MethodInfo *)0x0);
    if (EKEMDOEAFHP != (System_Xml_XmlDocument_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = NLPJLHOEAOE__DGBOOECJDDG((MethodInfo *)0x0);
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
      }
      bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3558,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3559,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
        }
        pSVar6 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3560,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3561,
                   (MethodInfo *)0x0);
        pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar3 = System_String__Format
                           (pSVar3,(Il2CppObject *)pSVar6,(Il2CppObject *)pSVar11,(MethodInfo *)0x0)
        ;
        GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar3,(MethodInfo *)0x0);
      }
      goto LAB_035dcc24;
    }
LAB_035dcfac:
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(ANFOHCGLHID_TypeInfo);
    }
    pAVar14 = ANFOHCGLHID_TypeInfo;
    pAVar13 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
    if (pAVar13 == (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) goto LAB_035dd6f8;
    bVar1 = true;
    (pAVar13->fields).BGGCAGBJCLA = true;
  }
  else {
LAB_035dcc24:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dcc1c with catch @ 035dcc24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dcba8 with catch @ 035dcc28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dcb80 with catch @ 035dcc2c
                        */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 035dcc44 to 036dcc47 has its CatchHandler @ 035dcc70 */
                    /* try { // try from 035dcc48 to 036dcc7f has its CatchHandler @ 035dca38 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3562,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3563,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 035dcc44 with catch @ 035dcc70 */
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 035dcc80 to 036dcc87 has its CatchHandler @ 035dcc9c */
                    /* try { // try from 035dcc88 to 036dcc93 has its CatchHandler @ 035dca38 */
    lVar7 = (*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                      (EKEMDOEAFHP,pSVar3,(EKEMDOEAFHP->klass->vtable)._51_get_Item.method);
                    /* try { // try from 035dcc94 to 036dcc9b has its CatchHandler @ 035dcc9c */
    if (lVar7 == 0) goto LAB_035dcfac;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035dcc80 with catch @ 035dcc9c
                       catch(type#2 @ 00000000) { ... } // from try @ 035dcc94 with catch @ 035dcc9c
                        */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3564,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3565,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    plVar8 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                               (EKEMDOEAFHP,pSVar3,(EKEMDOEAFHP->klass->vtable)._51_get_Item.method)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3566,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3567,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035dcd60 to 036dd45f has its CatchHandler @ 035dcd60
                       catch() { ... } // from try @ 035dcd60 with catch @ 035dcd60
                       catch() { ... } // from try @ 035dd468 with catch @ 035dcd60
                       catch() { ... } // from try @ 035ddc54 with catch @ 035dcd60
                       catch() { ... } // from try @ 035ddc78 with catch @ 035dcd60
                       catch() { ... } // from try @ 035ddcb8 with catch @ 035dcd60 */
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (plVar8 == (long *)0x0) goto LAB_035dd6f8;
    lVar7 = (**(code **)(*plVar8 + 0x468))(plVar8,pSVar3,*(undefined8 *)(*plVar8 + 0x470));
    if (lVar7 == 0) {
      bVar1 = false;
      pAVar14 = ANFOHCGLHID_TypeInfo;
    }
    else {
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(ANFOHCGLHID_TypeInfo);
      }
      pAVar14 = ANFOHCGLHID_TypeInfo;
      pAVar13 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
      if (pAVar13 == (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) goto LAB_035dd6f8;
      bVar1 = false;
      (pAVar13->fields).DMFPEAIGCBF = true;
    }
  }
  if ((pAVar14->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(pAVar14);
    pAVar14 = ANFOHCGLHID_TypeInfo;
  }
  pAVar13 = pAVar14->static_fields->LLPDICNBKEI;
  if (pAVar13 == (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) goto LAB_035dd6f8;
  if ((pAVar13->fields).DMFPEAIGCBF == false) {
    if (!bVar1) goto LAB_035dd6a8;
  }
  else {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3568,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3569,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
LAB_035dd6f8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar8 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                               (EKEMDOEAFHP,pSVar3,(EKEMDOEAFHP->klass->vtable)._51_get_Item.method)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3570,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3571,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (plVar8 == (long *)0x0) goto LAB_035dd6f8;
    plVar8 = (long *)(**(code **)(*plVar8 + 0x468))(plVar8,pSVar3,*(undefined8 *)(*plVar8 + 0x470));
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3572,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3573,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x468))
                                   (plVar8,pSVar3,*(undefined8 *)(*plVar8 + 0x470)),
       plVar8 == (long *)0x0)) goto LAB_035dd6f8;
    pSVar9 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3574,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3575,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035dd6f8;
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar3,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3576,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3577,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    plVar8 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                               (EKEMDOEAFHP,pSVar6,(EKEMDOEAFHP->klass->vtable)._51_get_Item.method)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3578,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3579,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (plVar8 == (long *)0x0) goto LAB_035dd6f8;
    plVar8 = (long *)(**(code **)(*plVar8 + 0x468))(plVar8,pSVar6,*(undefined8 *)(*plVar8 + 0x470));
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3580,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3581,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x468))
                                   (plVar8,pSVar6,*(undefined8 *)(*plVar8 + 0x470)),
       plVar8 == (long *)0x0)) goto LAB_035dd6f8;
    pSVar9 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3582,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3583,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035dd6f8;
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar6,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3584,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035dd460 to 036dd467 has its CatchHandler @ 035ddc5c */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 035dd468 to 036ddc4f has its CatchHandler @ 035dcd60 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3585,(MethodInfo *)0x0)
    ;
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3586,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3587,(MethodInfo *)0x0)
    ;
    pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat(pSVar11,pSVar3,pSVar12,pSVar6,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
    if ((__this_00 == (CFGLKHFFEKA_o *)0x0) ||
       (CFGLKHFFEKA__JAGMOPPIMKB(__this_00,pSVar3,(MethodInfo *)0x0),
       __this_01 == (CFGLKHFFEKA_o *)0x0)) goto LAB_035dd6f8;
    CFGLKHFFEKA__JAGMOPPIMKB(__this_01,pSVar6,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3588,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3589,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
    }
    pSVar6 = CFGLKHFFEKA__ALBJPLAPOBO(__this,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3590,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3591,(MethodInfo *)0x0)
    ;
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar12 = CFGLKHFFEKA__ALBJPLAPOBO(__this_00,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,pSVar6,pSVar11,pSVar12,(MethodInfo *)0x0);
    UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    bVar2 = CFGLKHFFEKA__KJECKLOHMAM(__this,__this_00,(MethodInfo *)0x0);
    pAVar14 = ANFOHCGLHID_TypeInfo;
    if (!bVar1 && !bVar2) goto LAB_035dd6a8;
  }
  if ((pAVar14->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(pAVar14);
    pAVar14 = ANFOHCGLHID_TypeInfo;
  }
  pAVar14->static_fields->AEFEDMKJKJE = true;
LAB_035dd6a8:
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EOAOCPLIKOI__HBOMFJGJNFM(__this,__this_01,(MethodInfo *)0x0);
  IBILBKNKKDG__ACNFBPJGBDP(__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void EJPLCDINCIO()  [RVA 0x34DD6FC]
// ANFOHCGLHID$$EJPLCDINCIO @ RVA 0x34DD6FC

void ANFOHCGLHID__EJPLCDINCIO(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04568723 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_11934/*"Settings"*/);
    FUN_01bab630(&StringLiteral_5572/*"ERROR: GameSettings.LoadInternalSettings - wrong file"*/);
    FUN_01bab630(&StringLiteral_5591/*"ERROR: loadInternalSettings - file 'internalSettings.xml' doesn't exist"*/);
    FUN_01bab630(&StringLiteral_19047/*"internalSettings.xml"*/);
    DAT_04568723 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_19047/*"internalSettings.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlDocument_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5591/*"ERROR: loadInternalSettings - file 'internalSettings.xml' doesn't exist"*/;
  }
  else {
    auVar3 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_11934/*"Settings"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    method_00 = auVar3._8_8_;
    if (auVar3._0_8_ != (System_Xml_XmlNode_o *)0x0) {
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      ANFOHCGLHID__ADNJKCLFCFH(auVar3._0_8_,method_00);
      return;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5572/*"ERROR: GameSettings.LoadInternalSettings - wrong file"*/;
  }
  UnityEngine_Debug__LogError((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
  return;
}


// ===== private static void DPHFPNFAHIC(XmlNode AHDGNOJPPIB)  [RVA 0x34DF830]
// ANFOHCGLHID$$DPHFPNFAHIC @ RVA 0x34DF830

/* WARNING: Removing unreachable block (ram,0x035dfb88) */

void ANFOHCGLHID__DPHFPNFAHIC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  DBGBHDDCAJC_o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_DBGBHDDCAJC__o *pSVar5;
  long lVar6;
  DBGBHDDCAJC_array *pDVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04568724 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&DBGBHDDCAJC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568724 = 1;
    method = extraout_x1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ANFOHCGLHID_TypeInfo,method);
  }
  pSVar5 = ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
  if (pSVar5 != (System_Collections_Generic_List_DBGBHDDCAJC__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_035df9a4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_035df9a4:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_035dfb28;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_035dfb10;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_035dfa04;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_035dfa04:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        __this = (DBGBHDDCAJC_o *)thunk_FUN_01bda818(DBGBHDDCAJC_TypeInfo);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        DBGBHDDCAJC___ctor(__this,AHDGNOJPPIB_00,(MethodInfo *)0x0);
        if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar6 = Method_System_Collections_Generic_List<DBGBHDDCAJC>_Add__;
        pSVar5 = ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
        if (pSVar5 == (System_Collections_Generic_List_DBGBHDDCAJC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pDVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pDVar7 == (DBGBHDDCAJC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pDVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pDVar7->m_Items[(int)uVar2] = __this;
          thunk_FUN_01c20e04(pDVar7->m_Items + (int)uVar2,__this);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_035dfb10:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_035dfb44;
    }
  }
LAB_035dfb28:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035dfb44:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public static void GGGLOMJOGNP()  [RVA 0x34DFC54]
// ANFOHCGLHID$$GGGLOMJOGNP @ RVA 0x34DFC54

void ANFOHCGLHID__GGGLOMJOGNP(MethodInfo *method)

{
  undefined8 *puVar1;
  bool_conflict bVar2;
  bool bVar3;
  CFGLKHFFEKA_o *pCVar4;
  CFGLKHFFEKA_o *__this;
  System_String_o *pSVar5;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  long *plVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  undefined8 uVar10;
  ANFOHCGLHID_c *method_00;
  uint CFHHLCMKGCH;
  ANFOHCGLHID_HLMLMHPDHOG_o *pAVar11;
  
  if ((DAT_04568725 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_6688/*"GameSettings::InitVersion: (read from users.xml) userDataVersion="*/);
    FUN_01bab630(&StringLiteral_5330/*"Detected update from {0} to {1}+! Reset packs cache..."*/);
    FUN_01bab630(&StringLiteral_21892/*"users.xml"*/);
    FUN_01bab630(&StringLiteral_5196/*"DataVersion"*/);
    FUN_01bab630(&StringLiteral_6687/*"GameSettings.InitVersion: userXML is null"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_11416/*"Root"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_14765/*"Version"*/);
    FUN_01bab630(&StringLiteral_1558/*"/users.xml"*/);
    FUN_01bab630(&StringLiteral_21893/*"usersDefault.xml"*/);
    FUN_01bab630(&StringLiteral_6689/*"GameSettings::InitVersion: [Versions]-node doesn't exist in users.xml"*/);
    FUN_01bab630(&StringLiteral_14775/*"Versions"*/);
    DAT_04568725 = 1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ANFOHCGLHID_TypeInfo->static_fields->AEFEDMKJKJE != false) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    __this = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
    CFGLKHFFEKA___ctor(__this,(MethodInfo *)0x0);
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar11 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
    if (pAVar11 != (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) {
      bVar2 = (pAVar11->fields).BGGCAGBJCLA;
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (bVar2 == false) {
        pSVar5 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
      }
      else {
        pSVar5 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
      }
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar11 = ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI;
      if (pAVar11 != (ANFOHCGLHID_HLMLMHPDHOG_o *)0x0) {
        CFHHLCMKGCH = (uint)(pAVar11->fields).BGGCAGBJCLA;
        puVar1 = &StringLiteral_21892/*"users.xml"*/;
        if (CFHHLCMKGCH != 0) {
          puVar1 = &StringLiteral_21893/*"usersDefault.xml"*/;
        }
        EKEMDOEAFHP = GIAMPEGMNHE__IBJOMPOLPCC
                                (pSVar5,(System_String_o *)*puVar1,CFHHLCMKGCH,true,true,false,
                                 (MethodInfo *)0x0);
        if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_6687/*"GameSettings.InitVersion: userXML is null"*/,(MethodInfo *)0x0);
        }
        else {
          plVar6 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                                     (EKEMDOEAFHP,StringLiteral_11416/*"Root"*/,
                                      (EKEMDOEAFHP->klass->vtable)._51_get_Item.method);
          if (plVar6 == (long *)0x0) goto LAB_035e0204;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                     (plVar6,StringLiteral_14775/*"Versions"*/,*(undefined8 *)(*plVar6 + 0x470));
          if (plVar6 == (long *)0x0) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_6689/*"GameSettings::InitVersion: [Versions]-node doesn't exist in users.xml"*/,(MethodInfo *)0x0);
          }
          else {
            plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_14765/*"Version"*/,*(undefined8 *)(*plVar6 + 0x470))
            ;
            if (plVar7 == (long *)0x0) goto LAB_035e0204;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035e0204;
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            if (pCVar4 == (CFGLKHFFEKA_o *)0x0) goto LAB_035e0204;
            uVar10 = (*(pCVar4->klass->vtable)._3_ToString.methodPtr)
                               (pCVar4,(pCVar4->klass->vtable)._3_ToString.method);
            if (pSVar9 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_035e0204;
            (*(pSVar9->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar9,uVar10,(pSVar9->klass->vtable)._10_set_Value.method);
            plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_5196/*"DataVersion"*/,*(undefined8 *)(*plVar6 + 0x470));
            if (plVar6 == (long *)0x0) goto LAB_035e0204;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035e0204;
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            if (__this == (CFGLKHFFEKA_o *)0x0) goto LAB_035e0204;
            CFGLKHFFEKA__JAGMOPPIMKB(__this,pSVar5,(MethodInfo *)0x0);
            if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar5 = CFGLKHFFEKA__ALBJPLAPOBO(__this,(MethodInfo *)0x0);
            pSVar5 = System_String__Concat(StringLiteral_6688/*"GameSettings::InitVersion: (read from users.xml) userDataVersion="*/,pSVar5,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          }
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          EOAOCPLIKOI__HBOMFJGJNFM(pCVar4,__this,(MethodInfo *)0x0);
          IBILBKNKKDG__ACNFBPJGBDP(pCVar4,(MethodInfo *)0x0);
          if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
          pSVar5 = System_String__Concat(pSVar5,StringLiteral_1558/*"/users.xml"*/,(MethodInfo *)0x0);
          GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar5,(MethodInfo *)0x0);
        }
        if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        IDDIABHBDEE__FKLCGHKBKHK((MethodInfo *)0x0);
        method_00 = ANFOHCGLHID_TypeInfo;
        if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (ANFOHCGLHID_c *)thunk_FUN_01ba7564();
        }
        pSVar5 = ANFOHCGLHID__PPGCNAHEAME((MethodInfo *)method_00);
        bVar3 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar5,(MethodInfo *)0x0);
        if (!bVar3) {
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar4 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
          if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
          }
          bVar3 = CFGLKHFFEKA__INMJFGMNBEB(pCVar4,pSVar5,(MethodInfo *)0x0);
          if (bVar3) {
            if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar4 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
            pSVar5 = System_String__Format
                               (StringLiteral_5330/*"Detected update from {0} to {1}+! Reset packs cache..."*/,(Il2CppObject *)pCVar4,(Il2CppObject *)pSVar5,
                                (MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            AAPGCAPGBLG__KEKJKEKNLHL((MethodInfo *)0x0);
          }
        }
        goto LAB_035e01cc;
      }
    }
LAB_035e0204:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035e01cc:
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ANFOHCGLHID_TypeInfo->static_fields->AEFEDMKJKJE = false;
  return;
}


// ===== private static void .cctor()  [RVA 0x34E0288]
// ANFOHCGLHID$$.cctor @ RVA 0x34E0288

void ANFOHCGLHID___cctor(MethodInfo *method)

{
  ANFOHCGLHID_HLMLMHPDHOG_o *__this;
  System_Collections_Generic_List_DBGBHDDCAJC__o *__this_00;
  System_Collections_Generic_List_DBGBHDDCAJC__o **ppSVar1;
  
  if ((DAT_04568726 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&ANFOHCGLHID_HLMLMHPDHOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DBGBHDDCAJC>_TypeInfo);
    DAT_04568726 = 1;
  }
  __this = (ANFOHCGLHID_HLMLMHPDHOG_o *)thunk_FUN_01bda818(ANFOHCGLHID_HLMLMHPDHOG_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BGGCAGBJCLA = false;
  (__this->fields).DMFPEAIGCBF = false;
  ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI = __this;
  thunk_FUN_01c20e04(ANFOHCGLHID_TypeInfo->static_fields,__this);
  ANFOHCGLHID_TypeInfo->static_fields->AEFEDMKJKJE = false;
  __this_00 = (System_Collections_Generic_List_DBGBHDDCAJC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DBGBHDDCAJC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DBGBHDDCAJC>__ctor__);
  ppSVar1 = &ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}


// ===== public static void OKDOPGLEAFC()  [RVA 0x34E0388]
// ANFOHCGLHID$$OKDOPGLEAFC @ RVA 0x34E0388

void ANFOHCGLHID__OKDOPGLEAFC(MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  ANFOHCGLHID_c *pAVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568727 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    DAT_04568727 = 1;
  }
  pAVar2 = ANFOHCGLHID_TypeInfo;
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    pAVar2 = (ANFOHCGLHID_c *)thunk_FUN_01ba7564();
  }
  ANFOHCGLHID__EJPLCDINCIO((MethodInfo *)pAVar2);
  ANFOHCGLHID__LOLAOCBNCJD(method_00);
  ANFOHCGLHID__AOJDPDOCMPN(method_01);
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__KHIBBBCNMCJ(GMGGINDHNPI,(MethodInfo *)0x0);
  if (bVar1) {
    pAVar2 = ANFOHCGLHID_TypeInfo;
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      pAVar2 = (ANFOHCGLHID_c *)thunk_FUN_01ba7564();
    }
    ANFOHCGLHID__LLNGDJHKEAA((MethodInfo *)pAVar2);
  }
  pAVar2 = ANFOHCGLHID_TypeInfo;
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    pAVar2 = (ANFOHCGLHID_c *)thunk_FUN_01ba7564();
  }
  ANFOHCGLHID__BOPANCPIEIC((MethodInfo *)pAVar2);
  ANFOHCGLHID__FOGOMNAOMBD(method_02);
  return;
}


// ===== private static void BOPANCPIEIC()  [RVA 0x34E0730]
// ANFOHCGLHID$$BOPANCPIEIC @ RVA 0x34E0730

void ANFOHCGLHID__BOPANCPIEIC(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04568728 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_5590/*"ERROR: loadCharacterProgress - wrong file"*/);
    FUN_01bab630(&StringLiteral_10511/*"Progress"*/);
    FUN_01bab630(&StringLiteral_4278/*"CharacterProgress.xml"*/);
    FUN_01bab630(&StringLiteral_5589/*"ERROR: loadCharacterProgress - file CharacterProgress.xml doesn't exist"*/);
    DAT_04568728 = 1;
  }
                    /* try { // try from 035e07b4 to 036e07db has its CatchHandler @ 035e0a54 */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_4278/*"CharacterProgress.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 035e0844 to 036e088b has its CatchHandler @ 035e0a5c */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5589/*"ERROR: loadCharacterProgress - file CharacterProgress.xml doesn't exist"*/;
  }
  else {
    auVar3 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10511/*"Progress"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    method_00 = auVar3._8_8_;
    if (auVar3._0_8_ != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 035e0810 to 036e083b has its CatchHandler @ 035e0a50 */
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      ANFOHCGLHID__KIGGIKNDOLP(auVar3._0_8_,method_00);
      return;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5590/*"ERROR: loadCharacterProgress - wrong file"*/;
  }
  UnityEngine_Debug__Log((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
  return;
}


// ===== private static void AOJDPDOCMPN()  [RVA 0x34E0554]
// ANFOHCGLHID$$AOJDPDOCMPN @ RVA 0x34E0554

void ANFOHCGLHID__AOJDPDOCMPN(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  FOKJBDHLIMG_o *__this;
  undefined8 *puVar2;
  System_Xml_XmlDocument_o *local_18;
  
  if ((DAT_04568729 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_5574/*"ERROR: LoadPerks - file perks.xml doesn't exist"*/);
    FUN_01bab630(&StringLiteral_1540/*"/perks.xml"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_5573/*"ERROR: GameSettings.LoadPerks - wrong file"*/);
    DAT_04568729 = 1;
  }
                    /* try { // try from 035e05cc to 036e07b3 has its CatchHandler @ 035e05cc
                       catch() { ... } // from try @ 035e05cc with catch @ 035e05cc
                       catch() { ... } // from try @ 035e08f0 with catch @ 035e05cc
                       catch() { ... } // from try @ 035e0a34 with catch @ 035e05cc
                       catch() { ... } // from try @ 035e0a3c with catch @ 035e05cc
                       catch() { ... } // from try @ 035e0af0 with catch @ 035e05cc */
  local_18 = (System_Xml_XmlDocument_o *)0x0;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1540/*"/perks.xml"*/,(MethodInfo *)0x0);
  DBHEKFDNJKG__GPFIKPJDGND(&local_18,pSVar1,(MethodInfo *)0x0);
  if (local_18 == (System_Xml_XmlDocument_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5574/*"ERROR: LoadPerks - file perks.xml doesn't exist"*/;
  }
  else {
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                  (*(local_18->klass->vtable)._51_get_Item.methodPtr)
                            (local_18,StringLiteral_10239/*"Perks"*/,
                             (local_18->klass->vtable)._51_get_Item.method);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this != (FOKJBDHLIMG_o *)0x0) {
        FOKJBDHLIMG__HNIHOIAMDPC(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5573/*"ERROR: GameSettings.LoadPerks - wrong file"*/;
  }
  UnityEngine_Debug__LogError((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
  return;
}


// ===== private static void LLNGDJHKEAA()  [RVA 0x34E06D0]
// ANFOHCGLHID$$LLNGDJHKEAA @ RVA 0x34E06D0

void ANFOHCGLHID__LLNGDJHKEAA(MethodInfo *method)

{
  DEKKGJNMFEB_o *__this;
  
  if ((DAT_0456872a & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_0456872a = 1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (DEKKGJNMFEB_o *)0x0) {
    DEKKGJNMFEB__HNIHOIAMDPC(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string CBHLMLMMFBP()  [RVA 0x34E0B40]
// ANFOHCGLHID$$CBHLMLMMFBP @ RVA 0x34E0B40

System_String_o * ANFOHCGLHID__CBHLMLMMFBP(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456872b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_0456872b = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UnityEngine_Application__get_version((MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035e0b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_String_o *)
             (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LHFADAKGOIC()  [RVA 0x34E0BA4]
// ANFOHCGLHID$$LHFADAKGOIC @ RVA 0x34E0BA4

void ANFOHCGLHID__LHFADAKGOIC(MethodInfo *method)

{
  DBGBHDDCAJC_o *__this;
  System_Collections_Generic_List_DBGBHDDCAJC__o *__this_00;
  int index;
  
  if ((DAT_0456872c & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>_get_Item__);
    DAT_0456872c = 1;
  }
  index = 0;
  while( true ) {
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
    if (__this_00 == (System_Collections_Generic_List_DBGBHDDCAJC__o *)0x0) break;
    if ((__this_00->fields)._size <= index) {
      return;
    }
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      __this_00 = ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
      if (__this_00 == (System_Collections_Generic_List_DBGBHDDCAJC__o *)0x0) break;
    }
    __this = (DBGBHDDCAJC_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<DBGBHDDCAJC>_get_Item__);
    if (__this == (DBGBHDDCAJC_o *)0x0) break;
    DBGBHDDCAJC__CMGOIFKPPPB(__this,(MethodInfo *)0x0);
    index = index + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FKKLOIFLEOG(XmlNode AHDGNOJPPIB)  [RVA 0x34DC70C]
// ANFOHCGLHID$$FKKLOIFLEOG @ RVA 0x34DC70C

void ANFOHCGLHID__FKKLOIFLEOG(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456872d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456872d = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
  if (__this != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
    MGNPHCAAEIO_FGHBAEIKNBF__HNIHOIAMDPC(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void ADNJKCLFCFH(XmlNode HPFNHDMAFAJ)  [RVA 0x34DD858]
// ANFOHCGLHID$$ADNJKCLFCFH @ RVA 0x34DD858

void ANFOHCGLHID__ADNJKCLFCFH(System_Xml_XmlNode_o *HPFNHDMAFAJ,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint32_t uVar3;
  System_Xml_XmlNode_o *pSVar4;
  ABCMPMHNMAP_o *__this;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  MGNPHCAAEIO_GNBEOEJBMKL_o *pMVar9;
  long lVar10;
  APDNEHFCNNE_o *__this_00;
  System_Collections_Generic_List_JGIFDELCGOJ__o *collection;
  MGNPHCAAEIO_CEMCIPLHMKD_o *__this_01;
  NDGHNMIHOMN_o *__this_02;
  System_Xml_XmlElement_o *EMICHNICCIB;
  LMDGNPDFNKF_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  JFDNJGDAMHJ_o *__this_04;
  GPJEDNEEAFK_o *__this_05;
  KDDFEFJOIJP_o *__this_06;
  PFOFJCIOLOG_o *__this_07;
  LKHOKLCLKNH_o *__this_08;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_09;
  MGNPHCAAEIO_MACDOBFPDPP_o *__this_10;
  DNICJALNLEB_o *__this_11;
  IDLLJHPDAHE_o *__this_12;
  MGNPHCAAEIO_ONAGKGIEEGI_o *__this_13;
  MGNPHCAAEIO_StaticFields *pMVar11;
  MGNPHCAAEIO_LLBEEBNCOND_o *__this_14;
  MGNPHCAAEIO_LAKDLMLPLND_o *__this_15;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this_16;
  float fVar12;
  undefined1 auVar13 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  
  if ((DAT_0456872e & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_Clear__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    FUN_01bab630(&StringLiteral_10384/*"Power"*/);
    FUN_01bab630(&StringLiteral_7121/*"HitEffects"*/);
    FUN_01bab630(&StringLiteral_4919/*"Currencies"*/);
    FUN_01bab630(&StringLiteral_8899/*"MaxValue"*/);
    FUN_01bab630(&StringLiteral_5051/*"DailyDebugMode"*/);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_8590/*"Location"*/);
    FUN_01bab630(&StringLiteral_3117/*"Aspects"*/);
    FUN_01bab630(&StringLiteral_3202/*"Attribute"*/);
    FUN_01bab630(&StringLiteral_5058/*"Damage"*/);
    FUN_01bab630(&StringLiteral_9311/*"NPivot"*/);
    FUN_01bab630(&StringLiteral_6579/*"FrameRate"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_3208/*"Attributes"*/);
    FUN_01bab630(&StringLiteral_3400/*"Base"*/);
    FUN_01bab630(&StringLiteral_2991/*"AntiCheatSettings"*/);
    FUN_01bab630(&StringLiteral_12193/*"SlowMode"*/);
    FUN_01bab630(&StringLiteral_6666/*"GUI"*/);
    FUN_01bab630(&StringLiteral_11312/*"ResistanceDoublingRange"*/);
    FUN_01bab630(&StringLiteral_9999/*"OutdateLevels"*/);
    FUN_01bab630(&StringLiteral_3262/*"Avatar"*/);
    FUN_01bab630(&StringLiteral_13799/*"TimeMax"*/);
    FUN_01bab630(&StringLiteral_12160/*"Skeleton"*/);
    FUN_01bab630(&StringLiteral_10996/*"RaitingFight"*/);
    FUN_01bab630(&StringLiteral_12195/*"SlowMotion"*/);
    FUN_01bab630(&StringLiteral_5254/*"DefaultItems"*/);
    FUN_01bab630(&StringLiteral_12389/*"StartingMagic"*/);
    FUN_01bab630(&StringLiteral_2987/*"Announcements"*/);
    FUN_01bab630(&StringLiteral_7118/*"Hints"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_8897/*"MaxTime"*/);
    FUN_01bab630(&StringLiteral_10593/*"PushRetantionTime"*/);
    FUN_01bab630(&StringLiteral_5064/*"DamageDoublingRange"*/);
    FUN_01bab630(&StringLiteral_5378/*"DifficultyEvaluation"*/);
    FUN_01bab630(&StringLiteral_3772/*"Camera"*/);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8426/*"LifeBar"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_17862/*"dojo"*/);
    FUN_01bab630(&StringLiteral_11339/*"RestoreNonWeapon"*/);
    FUN_01bab630(&StringLiteral_13776/*"Time"*/);
    FUN_01bab630(&StringLiteral_11799/*"SellItems"*/);
    FUN_01bab630(&StringLiteral_11313/*"Resistances"*/);
    FUN_01bab630(&StringLiteral_8886/*"MaxHealth"*/);
    FUN_01bab630(&StringLiteral_2806/*"AlignTargetAttributes"*/);
    FUN_01bab630(&StringLiteral_8903/*"MaximumExperience"*/);
    FUN_01bab630(&StringLiteral_16566/*"avatar_hero"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_10277/*"PivotNode"*/);
    FUN_01bab630(&StringLiteral_11154/*"Regeneration"*/);
    FUN_01bab630(&StringLiteral_10262/*"Physics"*/);
    FUN_01bab630(&StringLiteral_11378/*"RewardsPrize"*/);
    FUN_01bab630(&StringLiteral_11341/*"RestoreWeapon"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_4894/*"CriticalHit"*/);
    FUN_01bab630(&StringLiteral_10634/*"QualityOptions"*/);
    FUN_01bab630(&StringLiteral_8428/*"Lifesteal"*/);
    FUN_01bab630(&StringLiteral_3420/*"Basic"*/);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    FUN_01bab630(&StringLiteral_5065/*"DamageFactor"*/);
    FUN_01bab630(&StringLiteral_3513/*"BlockDamageFactor"*/);
    FUN_01bab630(&StringLiteral_3397/*"BarScales"*/);
    FUN_01bab630(&StringLiteral_9065/*"MinHits"*/);
    FUN_01bab630(&StringLiteral_8819/*"Map"*/);
    FUN_01bab630(&StringLiteral_4837/*"CounterPunches"*/);
    FUN_01bab630(&StringLiteral_3114/*"Aspect"*/);
    FUN_01bab630(&StringLiteral_3514/*"BlockDefense"*/);
    FUN_01bab630(&StringLiteral_14783/*"VibrationSettings"*/);
    FUN_01bab630(&StringLiteral_12500/*"StyleLevels"*/);
                    /* try { // try from 035ddc50 to 036ddc53 has its CatchHandler @ 035ddc58 */
                    /* try { // try from 035ddc54 to 036ddc73 has its CatchHandler @ 035dcd60 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ddc50 with catch @ 035ddc58
                        */
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dd460 with catch @ 035ddc5c
                        */
    FUN_01bab630(&StringLiteral_8692/*"LotteryRerollPrices"*/);
    FUN_01bab630(&StringLiteral_8679/*"Lottery"*/);
                    /* try { // try from 035ddc74 to 036ddc77 has its CatchHandler @ 035ddca0 */
                    /* try { // try from 035ddc78 to 036ddcaf has its CatchHandler @ 035dcd60 */
    FUN_01bab630(&StringLiteral_13974/*"Tutorial"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_14788/*"VideoAdCounterReset"*/);
                    /* catch() { ... } // from try @ 035ddc74 with catch @ 035ddca0 */
    FUN_01bab630(&StringLiteral_2717/*"AchievementCounter"*/);
    FUN_01bab630(&StringLiteral_7141/*"HotGroundTimer"*/);
                    /* try { // try from 035ddcb0 to 036ddcb7 has its CatchHandler @ 035ddccc */
                    /* try { // try from 035ddcb8 to 036ddcc3 has its CatchHandler @ 035dcd60 */
    FUN_01bab630(&StringLiteral_12000/*"Shop"*/);
                    /* try { // try from 035ddcc4 to 036ddccb has its CatchHandler @ 035ddccc */
    FUN_01bab630(&StringLiteral_6905/*"Great"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035ddcb0 with catch @ 035ddccc
                       catch(type#2 @ 00000000) { ... } // from try @ 035ddcc4 with catch @ 035ddccc
                        */
                    /* try { // try from 035ddcd0 to 036ddddf has its CatchHandler @ 035ddcd0
                       catch() { ... } // from try @ 035ddcd0 with catch @ 035ddcd0
                       catch() { ... } // from try @ 035dde0c with catch @ 035ddcd0
                       catch() { ... } // from try @ 035dded0 with catch @ 035ddcd0
                       catch() { ... } // from try @ 035ddef8 with catch @ 035ddcd0
                       catch() { ... } // from try @ 035ddf38 with catch @ 035ddcd0 */
    FUN_01bab630(&StringLiteral_5052/*"DailyDebugTime"*/);
    DAT_0456872e = 1;
  }
  if (HPFNHDMAFAJ != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                       (HPFNHDMAFAJ,StringLiteral_3208/*"Attributes"*/,
                        (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
    if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
      if (__this == (ABCMPMHNMAP_o *)0x0) goto LAB_035df82c;
      ABCMPMHNMAP__HNIHOIAMDPC(__this,pSVar4,(MethodInfo *)0x0);
    }
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                       (HPFNHDMAFAJ,StringLiteral_11030/*"RatingEvaluation"*/,
                        (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
    if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
      if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PJKHAJKEHEL__FFCGJEKIIPE(pSVar4,(MethodInfo *)0x0);
    }
    pSVar4 = (System_Xml_XmlNode_o *)
             (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                       (HPFNHDMAFAJ,StringLiteral_5378/*"DifficultyEvaluation"*/,
                        (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
    if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_SF2_GUI_Map_DifficultyPanel__DifficultyEvaluationParse(pSVar4,(MethodInfo *)0x0);
    }
                    /* try { // try from 035ddde0 to 036ddde7 has its CatchHandler @ 035ddedc */
    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                               (HPFNHDMAFAJ,StringLiteral_12193/*"SlowMode"*/,
                                (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                    /* try { // try from 035dde08 to 036dde0b has its CatchHandler @ 035dded8 */
    if ((plVar5 != (long *)0x0) &&
       (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
       pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 035dde0c to 036ddecb has its CatchHandler @ 035ddcd0 */
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,10,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      MGNPHCAAEIO_TypeInfo->static_fields->PBJPEIOLHPG = iVar2;
      plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                 (HPFNHDMAFAJ,StringLiteral_12193/*"SlowMode"*/,
                                  (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
      if ((plVar5 != (long *)0x0) &&
         (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_8897/*"MaxTime"*/,(MethodInfo *)0x0);
        fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,100.0,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,fVar12,
                   (MethodInfo *)0x0);
        local_70.fakeValueActive = local_90.fakeValueActive;
        local_70.inited = local_90.inited;
        local_70._18_2_ = local_90._18_2_;
        local_70.hiddenValueOldByte4.fields = local_90.hiddenValueOldByte4.fields;
        local_70.fakeValue = local_90.fakeValue;
        local_70.currentCryptoKey = local_90.currentCryptoKey;
        local_70.hiddenValue = local_90.hiddenValue;
        pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                    /* try { // try from 035ddecc to 036ddecf has its CatchHandler @ 035dded4 */
                    /* try { // try from 035dded0 to 036ddef3 has its CatchHandler @ 035ddcd0 */
        (pMVar11->AKPHDPKNMIC).fields.fakeValueActive = local_90.fakeValueActive;
        (pMVar11->AKPHDPKNMIC).fields.inited = local_90.inited;
        *(undefined2 *)&(pMVar11->AKPHDPKNMIC).fields.field_0x12 = local_90._18_2_;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ddecc with catch @ 035dded4
                        */
        (pMVar11->AKPHDPKNMIC).fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)local_90.hiddenValueOldByte4.fields;
        (pMVar11->AKPHDPKNMIC).fields.fakeValue = local_90.fakeValue;
        (pMVar11->AKPHDPKNMIC).fields.currentCryptoKey = local_90.currentCryptoKey;
        (pMVar11->AKPHDPKNMIC).fields.hiddenValue = local_90.hiddenValue;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dde08 with catch @ 035dded8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ddde0 with catch @ 035ddedc
                        */
        plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                   (HPFNHDMAFAJ,StringLiteral_12193/*"SlowMode"*/,
                                    (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                    /* try { // try from 035ddef4 to 036ddef7 has its CatchHandler @ 035ddf20 */
                    /* try { // try from 035ddef8 to 036ddf2f has its CatchHandler @ 035ddcd0 */
        if ((plVar5 != (long *)0x0) &&
           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
           pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar6,StringLiteral_11341/*"RestoreWeapon"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035ddef4 with catch @ 035ddf20 */
          fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,4.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,fVar12,
                     (MethodInfo *)0x0);
                    /* try { // try from 035ddf30 to 036ddf37 has its CatchHandler @ 035ddf4c */
                    /* try { // try from 035ddf38 to 036ddf43 has its CatchHandler @ 035ddcd0 */
          local_90.fakeValueActive = local_b0.fakeValueActive;
          local_90.inited = local_b0.inited;
          local_90._18_2_ = local_b0._18_2_;
                    /* try { // try from 035ddf44 to 036ddf4b has its CatchHandler @ 035ddf4c */
          local_90.hiddenValueOldByte4.fields = local_b0.hiddenValueOldByte4.fields;
          local_90.fakeValue = local_b0.fakeValue;
          local_90.currentCryptoKey = local_b0.currentCryptoKey;
          local_90.hiddenValue = local_b0.hiddenValue;
          pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035ddf30 with catch @ 035ddf4c
                       catch(type#2 @ 00000000) { ... } // from try @ 035ddf44 with catch @ 035ddf4c
                        */
          (pMVar11->DLFHGFGPKDE).fields.fakeValueActive = local_b0.fakeValueActive;
          (pMVar11->DLFHGFGPKDE).fields.inited = local_b0.inited;
          *(undefined2 *)&(pMVar11->DLFHGFGPKDE).fields.field_0x12 = local_b0._18_2_;
          (pMVar11->DLFHGFGPKDE).fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_b0.hiddenValueOldByte4.fields;
          (pMVar11->DLFHGFGPKDE).fields.fakeValue = local_b0.fakeValue;
          (pMVar11->DLFHGFGPKDE).fields.currentCryptoKey = local_b0.currentCryptoKey;
          (pMVar11->DLFHGFGPKDE).fields.hiddenValue = local_b0.hiddenValue;
          plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                     (HPFNHDMAFAJ,StringLiteral_12193/*"SlowMode"*/,
                                      (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
          if ((plVar5 != (long *)0x0) &&
             (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
             pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar6,StringLiteral_11339/*"RestoreNonWeapon"*/,(MethodInfo *)0x0);
            fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,2.0,(MethodInfo *)0x0);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c8,fVar12,
                       (MethodInfo *)0x0);
            local_b0.fakeValueActive = local_c8.fakeValueActive;
            local_b0.inited = local_c8.inited;
            local_b0._18_2_ = local_c8._18_2_;
            local_b0.hiddenValueOldByte4.fields = local_c8.hiddenValueOldByte4.fields;
            local_b0.fakeValue = local_c8.fakeValue;
            local_b0.currentCryptoKey = local_c8.currentCryptoKey;
            local_b0.hiddenValue = local_c8.hiddenValue;
            pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
            (pMVar11->EKJJMBGGJAC).fields.fakeValueActive = local_c8.fakeValueActive;
            (pMVar11->EKJJMBGGJAC).fields.inited = local_c8.inited;
            *(undefined2 *)&(pMVar11->EKJJMBGGJAC).fields.field_0x12 = local_c8._18_2_;
            (pMVar11->EKJJMBGGJAC).fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_c8.hiddenValueOldByte4.fields;
            (pMVar11->EKJJMBGGJAC).fields.fakeValue = local_c8.fakeValue;
            (pMVar11->EKJJMBGGJAC).fields.currentCryptoKey = local_c8.currentCryptoKey;
            (pMVar11->EKJJMBGGJAC).fields.hiddenValue = local_c8.hiddenValue;
            plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                       (HPFNHDMAFAJ,StringLiteral_12195/*"SlowMotion"*/,
                                        (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
            if ((plVar5 != (long *)0x0) &&
               (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
               pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
              pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar6,StringLiteral_5266/*"Defense"*/,(MethodInfo *)0x0);
              pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              if (DAT_045687fe == '\0') {
                FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                DAT_045687fe = '\x01';
              }
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
              pMVar11->_NNOAHGCFLOM_k__BackingField = pSVar8;
              thunk_FUN_01c20e04(&pMVar11->_NNOAHGCFLOM_k__BackingField,pSVar8);
              plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                         (HPFNHDMAFAJ,StringLiteral_3262/*"Avatar"*/,
                                          (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
              if ((plVar5 != (long *)0x0) &&
                 (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                 pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_16566/*"avatar_hero"*/,(MethodInfo *)0x0);
                if (DAT_045687ff == '\0') {
                  FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                  DAT_045687ff = '\x01';
                }
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                pMVar11->JGACMNLLDDH = pSVar8;
                thunk_FUN_01c20e04(&pMVar11->JGACMNLLDDH,pSVar8);
                plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                           (HPFNHDMAFAJ,StringLiteral_12160/*"Skeleton"*/,
                                            (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                if ((plVar5 != (long *)0x0) &&
                   (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240))
                   , pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar6,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
                  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_12160/*"Skeleton"*/,(MethodInfo *)0x0);
                  if (DAT_04568800 == '\0') {
                    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    DAT_04568800 = '\x01';
                  }
                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                  pMVar11->HJGJPNIFHFC = pSVar8;
                  thunk_FUN_01c20e04(&pMVar11->HJGJPNIFHFC,pSVar8);
                  pSVar4 = (System_Xml_XmlNode_o *)
                           (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                     (HPFNHDMAFAJ,StringLiteral_5254/*"DefaultItems"*/,
                                      (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    MGNPHCAAEIO__KLDHIMFIMMP(pSVar4,(MethodInfo *)0x0);
                  }
                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                             (HPFNHDMAFAJ,StringLiteral_8590/*"Location"*/,
                                              (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                  if ((plVar5 != (long *)0x0) &&
                     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                               (**(code **)(*plVar5 + 0x238))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_17862/*"dojo"*/,(MethodInfo *)0x0);
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
                    }
                    pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                    pMVar11->IKFICENDNCL = pSVar8;
                    thunk_FUN_01c20e04(&pMVar11->IKFICENDNCL,pSVar8);
                    __this_14 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
                    pSVar4 = (System_Xml_XmlNode_o *)
                             (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                       (HPFNHDMAFAJ,StringLiteral_13974/*"Tutorial"*/,
                                        (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                    if (__this_14 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
                      MGNPHCAAEIO_LLBEEBNCOND__HNIHOIAMDPC(__this_14,pSVar4,(MethodInfo *)0x0);
                      plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                                 (HPFNHDMAFAJ,StringLiteral_10277/*"PivotNode"*/,
                                                  (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                      if ((plVar5 != (long *)0x0) &&
                         (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                   (**(code **)(*plVar5 + 0x238))
                                             (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                         pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                        pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                           (pSVar7,StringLiteral_9311/*"NPivot"*/,(MethodInfo *)0x0);
                        pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                        pMVar11->EJOKLMCEPFG = pSVar8;
                        thunk_FUN_01c20e04(&pMVar11->EJOKLMCEPFG);
                        plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                                   (HPFNHDMAFAJ,StringLiteral_11799/*"SellItems"*/,
                                                    (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method
                                                   );
                        if ((plVar5 != (long *)0x0) &&
                           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                     (**(code **)(*plVar5 + 0x238))
                                               (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                           pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar6,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                          fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.5,(MethodInfo *)0x0);
                          MGNPHCAAEIO_TypeInfo->static_fields->CEDCEKMCGPJ = fVar12;
                          plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                                     (HPFNHDMAFAJ,StringLiteral_4507/*"Combo"*/,
                                                      (HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                      method);
                          if ((plVar5 != (long *)0x0) &&
                             (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar5 + 0x238))
                                                 (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                             pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar6,StringLiteral_9065/*"MinHits"*/,(MethodInfo *)0x0);
                            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,3,(MethodInfo *)0x0);
                            MGNPHCAAEIO__KANEDKDJCOE(iVar2,(MethodInfo *)0x0);
                            plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                                       (HPFNHDMAFAJ,StringLiteral_4507/*"Combo"*/,
                                                        (HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                        method);
                    /* try { // try from 035de42c to 036de4df has its CatchHandler @ 035de42c
                       catch() { ... } // from try @ 035de42c with catch @ 035de42c
                       catch() { ... } // from try @ 035de5ac with catch @ 035de42c
                       catch() { ... } // from try @ 035de654 with catch @ 035de42c
                       catch() { ... } // from try @ 035de65c with catch @ 035de42c
                       catch() { ... } // from try @ 035de710 with catch @ 035de42c */
                            if ((plVar5 != (long *)0x0) &&
                               (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                         (**(code **)(*plVar5 + 0x238))
                                                   (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                               pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                              pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar6,StringLiteral_13776/*"Time"*/,(MethodInfo *)0x0);
                              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0x5a,(MethodInfo *)0x0);
                              MGNPHCAAEIO__DJFLAFKJOAJ(iVar2,(MethodInfo *)0x0);
                              plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr
                                               )(HPFNHDMAFAJ,StringLiteral_2987/*"Announcements"*/,
                                                 (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                              if ((plVar5 != (long *)0x0) &&
                                 (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                           (**(code **)(*plVar5 + 0x238))
                                                     (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                                 pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                                pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar6,StringLiteral_13776/*"Time"*/,(MethodInfo *)0x0);
                                iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0x3c,(MethodInfo *)0x0);
                                MGNPHCAAEIO__NDNCCAKNFOH(iVar2,(MethodInfo *)0x0);
                                plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                   methodPtr)(HPFNHDMAFAJ,StringLiteral_7141/*"HotGroundTimer"*/,
                                                              (HPFNHDMAFAJ->klass->vtable).
                                                              _51_get_Item.method);
                    /* try { // try from 035de4e0 to 036de507 has its CatchHandler @ 035de674 */
                                if ((plVar5 != (long *)0x0) &&
                                   (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                             (**(code **)(*plVar5 + 0x238))
                                                       (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                                   pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                                  pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar6,StringLiteral_13776/*"Time"*/,(MethodInfo *)0x0);
                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0x5a,(MethodInfo *)0x0);
                                  MGNPHCAAEIO__PJNGJBKHPLP(iVar2,(MethodInfo *)0x0);
                                  pSVar4 = (System_Xml_XmlNode_o *)
                                           (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                                                     (HPFNHDMAFAJ,StringLiteral_10262/*"Physics"*/,
                                                      (HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                      method);
                                  EBGMOLCMOHK__HNIHOIAMDPC(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 035de53c to 036de567 has its CatchHandler @ 035de670 */
                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                     methodPtr)(HPFNHDMAFAJ,StringLiteral_6905/*"Great"*/,
                                                                (HPFNHDMAFAJ->klass->vtable).
                                                                _51_get_Item.method);
                                  if ((plVar5 != (long *)0x0) &&
                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                               (**(code **)(*plVar5 + 0x238))
                                                         (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
                                     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                                    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar6,StringLiteral_8886/*"MaxHealth"*/,(MethodInfo *)0x0)
                                    ;
                                    fVar12 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,0.3,(MethodInfo *)0x0);
                    /* try { // try from 035de5a0 to 036de5ab has its CatchHandler @ 035de668 */
                                    MGNPHCAAEIO_TypeInfo->static_fields->EGFHCOGFCJK = fVar12;
                    /* try { // try from 035de5ac to 036de647 has its CatchHandler @ 035de42c */
                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                       methodPtr)(HPFNHDMAFAJ,StringLiteral_5065/*"DamageFactor"*/,
                                                                  (HPFNHDMAFAJ->klass->vtable).
                                                                  _51_get_Item.method);
                                    if ((plVar5 != (long *)0x0) &&
                                       (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                                 (**(code **)(*plVar5 + 0x238))
                                                           (plVar5,*(undefined8 *)(*plVar5 + 0x240))
                                       , pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                                      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar6,StringLiteral_3400/*"Base"*/,
                                                          (MethodInfo *)0x0);
                                      fVar12 = EIABCPKDEBD__GICIEKCGOHA
                                                         (pSVar7,0.0,(MethodInfo *)0x0);
                                      MGNPHCAAEIO__LNJHABFBLNP(fVar12,(MethodInfo *)0x0);
                                      plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                         methodPtr)(HPFNHDMAFAJ,StringLiteral_5065/*"DamageFactor"*/,
                                                                    (HPFNHDMAFAJ->klass->vtable).
                                                                    _51_get_Item.method);
                                      if ((plVar5 != (long *)0x0) &&
                                         (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                                   (**(code **)(*plVar5 + 0x238))
                                                             (plVar5,*(undefined8 *)
                                                                      (*plVar5 + 0x240)),
                                         pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                                        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                           (pSVar6,StringLiteral_8899/*"MaxValue"*/,
                                                            (MethodInfo *)0x0);
                    /* try { // try from 035de648 to 036de64f has its CatchHandler @ 035de678 */
                                        iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                          (pSVar7,20000,(MethodInfo *)0x0);
                    /* try { // try from 035de650 to 036de653 has its CatchHandler @ 035de66c */
                    /* try { // try from 035de654 to 036de657 has its CatchHandler @ 035de42c */
                                        MGNPHCAAEIO__JNBIHOPDPJC((float)iVar2,(MethodInfo *)0x0);
                    /* try { // try from 035de658 to 036de65b has its CatchHandler @ 035de664 */
                    /* try { // try from 035de65c to 036de68f has its CatchHandler @ 035de42c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de658 with catch @ 035de664
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de5a0 with catch @ 035de668
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de650 with catch @ 035de66c
                        */
                                        plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable)._51_get_Item
                                                           .methodPtr)(HPFNHDMAFAJ,
                                                                       StringLiteral_5065/*"DamageFactor"*/,
                                                                       (HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de53c with catch @ 035de670
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de4e0 with catch @ 035de674
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de648 with catch @ 035de678
                        */
                                        if ((plVar5 != (long *)0x0) &&
                                           (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                                     (**(code **)(*plVar5 + 0x238))
                                                               (plVar5,*(undefined8 *)
                                                                        (*plVar5 + 0x240)),
                                           pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 035de690 to 036de693 has its CatchHandler @ 035de6a0 */
                                          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                             (pSVar6,StringLiteral_3202/*"Attribute"*/,
                                                              (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035de690 with catch @ 035de6a0 */
                                          pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                             (pSVar7,StringLiteral_1/*""*/,
                                                              (MethodInfo *)0x0);
                    /* try { // try from 035de6a8 to 036de70f has its CatchHandler @ 035de724 */
                                          if (DAT_04568801 == '\0') {
                                            FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                            DAT_04568801 = '\x01';
                                          }
                                          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                                            thunk_FUN_01ba7564();
                                          }
                                          pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                                          pMVar11->GPECMIFNCLI = pSVar8;
                                          thunk_FUN_01c20e04(&pMVar11->GPECMIFNCLI,pSVar8);
                    /* try { // try from 035de710 to 036de71b has its CatchHandler @ 035de42c */
                                          pSVar4 = (System_Xml_XmlNode_o *)
                                                   (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.
                                                     methodPtr)(HPFNHDMAFAJ,StringLiteral_3513/*"BlockDamageFactor"*/,
                                                                (HPFNHDMAFAJ->klass->vtable).
                                                                _51_get_Item.method);
                    /* try { // try from 035de71c to 036de723 has its CatchHandler @ 035de724 */
                                          if (DAT_0456812c == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035de6a8 with catch @ 035de724
                       catch(type#2 @ 00000000) { ... } // from try @ 035de71c with catch @ 035de724
                        */
                                            FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                            DAT_0456812c = '\x01';
                                          }
                                          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                                            thunk_FUN_01ba7564();
                                          }
                                          pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->NMHCNBDHLLL;
                                          if (pMVar9 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) {
                                            MGNPHCAAEIO_GNBEOEJBMKL__HNIHOIAMDPC
                                                      (pMVar9,pSVar4,(MethodInfo *)0x0);
                                            plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                               _51_get_Item.methodPtr)
                                                                       (HPFNHDMAFAJ,
                                                                        StringLiteral_4894/*"CriticalHit"*/,
                                                                        (HPFNHDMAFAJ->klass->vtable)
                                                                        ._51_get_Item.method);
                                            if (plVar5 != (long *)0x0) {
                                              pSVar4 = (System_Xml_XmlNode_o *)
                                                       (**(code **)(*plVar5 + 0x468))
                                                                 (plVar5,StringLiteral_5058/*"Damage"*/,
                                                                  *(undefined8 *)(*plVar5 + 0x470));
                                              if (DAT_0456812d == '\0') {
                                                FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                DAT_0456812d = '\x01';
                                              }
                                              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                                                thunk_FUN_01ba7564();
                                              }
                                              pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->
                                                       BGAEBBMNCFD;
                                              if (pMVar9 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) {
                                                MGNPHCAAEIO_GNBEOEJBMKL__HNIHOIAMDPC
                                                          (pMVar9,pSVar4,(MethodInfo *)0x0);
                                                plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                   _51_get_Item.methodPtr)
                                                                           (HPFNHDMAFAJ,
                                                                            StringLiteral_3514/*"BlockDefense"*/,
                                                                            (HPFNHDMAFAJ->klass->
                                                                            vtable)._51_get_Item.
                                                                            method);
                                                if ((plVar5 != (long *)0x0) &&
                                                   (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                                                             (**(code **)(*plVar5 + 0x238))
                                                                       (plVar5,*(undefined8 *)
                                                                                (*plVar5 + 0x240)),
                                                   pSVar6 != (System_Xml_XmlAttributeCollection_o *)
                                                             0x0)) {
                                                  pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_3202/*"Attribute"*/,
                                                             (MethodInfo *)0x0);
                                                  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                                     (pSVar7,StringLiteral_1/*""*/,
                                                                      (MethodInfo *)0x0);
                    /* try { // try from 035de850 to 036de887 has its CatchHandler @ 035de850
                       catch() { ... } // from try @ 035de850 with catch @ 035de850
                       catch() { ... } // from try @ 035de894 with catch @ 035de850
                       catch() { ... } // from try @ 035de8d4 with catch @ 035de850
                       catch() { ... } // from try @ 035de9ec with catch @ 035de850 */
                                                  if (DAT_04568802 == '\0') {
                                                    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                    DAT_04568802 = '\x01';
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                    /* try { // try from 035de888 to 036de893 has its CatchHandler @ 035de8a4 */
                                                  pMVar11->_NJLJAAEIDBE_k__BackingField = pSVar8;
                    /* try { // try from 035de894 to 036de8bb has its CatchHandler @ 035de850 */
                                                  thunk_FUN_01c20e04(&pMVar11->
                                                  _NJLJAAEIDBE_k__BackingField,pSVar8);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035de888 with catch @ 035de8a4
                        */
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_5064/*"DamageDoublingRange"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                    /* try { // try from 035de8bc to 036de8d3 has its CatchHandler @ 035de9e4 */
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                    /* try { // try from 035de8d4 to 036de9d3 has its CatchHandler @ 035de850 */
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  fVar12 = EIABCPKDEBD__GICIEKCGOHA
                                                                     (pSVar7,0.0,(MethodInfo *)0x0);
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o
                                                  *)&local_90,fVar12,(MethodInfo *)0x0);
                                                  local_70.fakeValueActive =
                                                       local_90.fakeValueActive;
                                                  local_70.inited = local_90.inited;
                                                  local_70._18_2_ = local_90._18_2_;
                                                  local_70.hiddenValueOldByte4.fields =
                                                       local_90.hiddenValueOldByte4.fields;
                                                  local_70.fakeValue = local_90.fakeValue;
                                                  local_70.currentCryptoKey =
                                                       local_90.currentCryptoKey;
                                                  local_70.hiddenValue = local_90.hiddenValue;
                                                  pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                                                  (pMVar11->EEBCCADECEJ).fields.fakeValueActive =
                                                       local_90.fakeValueActive;
                                                  (pMVar11->EEBCCADECEJ).fields.inited =
                                                       local_90.inited;
                                                  *(undefined2 *)
                                                   &(pMVar11->EEBCCADECEJ).fields.field_0x12 =
                                                       local_90._18_2_;
                                                  (pMVar11->EEBCCADECEJ).fields.hiddenValueOldByte4
                                                       = (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                                         local_90.hiddenValueOldByte4.fields;
                                                  (pMVar11->EEBCCADECEJ).fields.fakeValue =
                                                       local_90.fakeValue;
                                                  (pMVar11->EEBCCADECEJ).fields.currentCryptoKey =
                                                       local_90.currentCryptoKey;
                                                  (pMVar11->EEBCCADECEJ).fields.hiddenValue =
                                                       local_90.hiddenValue;
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_11312/*"ResistanceDoublingRange"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  fVar12 = EIABCPKDEBD__GICIEKCGOHA
                                                                     (pSVar7,0.0,(MethodInfo *)0x0);
                                                  MGNPHCAAEIO__OICFOLPIFEB(fVar12,(MethodInfo *)0x0)
                                                  ;
                                                  lVar10 = (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,
                                                                      StringLiteral_12389/*"StartingMagic"*/,
                                                                      (HPFNHDMAFAJ->klass->vtable).
                                                                      _51_get_Item.method);
                                                  if (lVar10 == 0) {
                                                    pSVar8 = (System_String_o *)0x0;
                                                  }
                                                  else {
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_12389/*"StartingMagic"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                                                    if ((plVar5 == (long *)0x0) ||
                                                       (pSVar6 = (
                                                  System_Xml_XmlAttributeCollection_o *)
                                                  (**(code **)(*plVar5 + 0x238))
                                                            (plVar5,*(undefined8 *)(*plVar5 + 0x240)
                                                            ),
                                                  pSVar6 == (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) goto LAB_035df82c;
                                                  pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_3202/*"Attribute"*/,
                                                             (MethodInfo *)0x0);
                                                  pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                                     (pSVar7,StringLiteral_1/*""*/,
                                                                      (MethodInfo *)0x0);
                    /* try { // try from 035de9d4 to 036de9e3 has its CatchHandler @ 035de9e4 */
                                                  }
                    /* catch() { ... } // from try @ 035de8bc with catch @ 035de9e4
                       catch() { ... } // from try @ 035de9d4 with catch @ 035de9e4 */
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                    /* try { // try from 035de9e8 to 036de9eb has its CatchHandler @ 035de9f4 */
                                                    thunk_FUN_01ba7564();
                                                  }
                    /* try { // try from 035de9ec to 036de9f7 has its CatchHandler @ 035de850 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035de9e8 with catch @ 035de9f4
                        */
                                                  if (DAT_04568803 == '\0') {
                                                    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                    DAT_04568803 = '\x01';
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  pMVar11 = MGNPHCAAEIO_TypeInfo->static_fields;
                                                  pMVar11->_LFNLPFFJNGH_k__BackingField = pSVar8;
                                                  thunk_FUN_01c20e04(&pMVar11->
                                                  _LFNLPFFJNGH_k__BackingField,pSVar8);
                                                  lVar10 = (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,
                                                                      StringLiteral_10384/*"Power"*/,
                                                                      (HPFNHDMAFAJ->klass->vtable).
                                                                      _51_get_Item.method);
                                                  if (lVar10 == 0) {
                                                    iVar2 = 10;
                                                  }
                                                  else {
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_10384/*"Power"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                                                    if ((plVar5 == (long *)0x0) ||
                                                       (pSVar6 = (
                                                  System_Xml_XmlAttributeCollection_o *)
                                                  (**(code **)(*plVar5 + 0x238))
                                                            (plVar5,*(undefined8 *)(*plVar5 + 0x240)
                                                            ),
                                                  pSVar6 == (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) goto LAB_035df82c;
                                                  pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_8868/*"Max"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,10,(MethodInfo *)0x0);
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  MGNPHCAAEIO__NAFLLJFLMEK(iVar2,(MethodInfo *)0x0);
                                                  lVar10 = (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,
                                                                      StringLiteral_10384/*"Power"*/,
                                                                      (HPFNHDMAFAJ->klass->vtable).
                                                                      _51_get_Item.method);
                                                  if (lVar10 == 0) {
                                                    iVar2 = 600;
                                                  }
                                                  else {
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_10384/*"Power"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                                                    if ((plVar5 == (long *)0x0) ||
                                                       (pSVar6 = (
                                                  System_Xml_XmlAttributeCollection_o *)
                                                  (**(code **)(*plVar5 + 0x238))
                                                            (plVar5,*(undefined8 *)(*plVar5 + 0x240)
                                                            ),
                                                  pSVar6 == (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) goto LAB_035df82c;
                                                  pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_13799/*"TimeMax"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,600,(MethodInfo *)0x0);
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  MGNPHCAAEIO_TypeInfo->static_fields->JDKIOMFLCFD =
                                                       iVar2;
                                                  lVar10 = (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_8426/*"LifeBar"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (lVar10 == 0) {
                                                    fVar12 = 0.0;
                                                  }
                                                  else {
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_8426/*"LifeBar"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                    /* try { // try from 035debb4 to 036dec73 has its CatchHandler @ 035debb4
                       catch() { ... } // from try @ 035debb4 with catch @ 035debb4
                       catch() { ... } // from try @ 035ded50 with catch @ 035debb4
                       catch() { ... } // from try @ 035dee2c with catch @ 035debb4
                       catch() { ... } // from try @ 035dee34 with catch @ 035debb4
                       catch() { ... } // from try @ 035dee44 with catch @ 035debb4
                       catch() { ... } // from try @ 035deef8 with catch @ 035debb4 */
                                                    if ((plVar5 == (long *)0x0) ||
                                                       (pSVar6 = (
                                                  System_Xml_XmlAttributeCollection_o *)
                                                  (**(code **)(*plVar5 + 0x238))
                                                            (plVar5,*(undefined8 *)(*plVar5 + 0x240)
                                                            ),
                                                  pSVar6 == (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) goto LAB_035df82c;
                                                  pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  fVar12 = EIABCPKDEBD__GICIEKCGOHA
                                                                     (pSVar7,0.0,(MethodInfo *)0x0);
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  if (DAT_04568804 == '\0') {
                                                    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                    DAT_04568804 = '\x01';
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  iVar2 = 0x2a300;
                                                  MGNPHCAAEIO_TypeInfo->static_fields->
                                                  _AMCDIFOCEBB_k__BackingField = fVar12;
                                                  lVar10 = (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,
                                                                      StringLiteral_10593/*"PushRetantionTime"*/,
                                                                      (HPFNHDMAFAJ->klass->vtable).
                                                                      _51_get_Item.method);
                                                  if (lVar10 != 0) {
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_10593/*"PushRetantionTime"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                    /* try { // try from 035dec74 to 036dec9b has its CatchHandler @ 035dee60 */
                                                    if ((plVar5 == (long *)0x0) ||
                                                       (pSVar6 = (
                                                  System_Xml_XmlAttributeCollection_o *)
                                                  (**(code **)(*plVar5 + 0x238))
                                                            (plVar5,*(undefined8 *)(*plVar5 + 0x240)
                                                            ),
                                                  pSVar6 == (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) goto LAB_035df82c;
                                                  pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,0x2a300,
                                                                     (MethodInfo *)0x0);
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  MGNPHCAAEIO_TypeInfo->static_fields->JFIOKFCNJKK =
                                                       iVar2;
                    /* try { // try from 035decd0 to 036decfb has its CatchHandler @ 035dee5c */
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_9999/*"OutdateLevels"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->BLNBAFGCAOK;
                                                    if (__this_00 == (APDNEHFCNNE_o *)0x0)
                                                    goto LAB_035df82c;
                                                    APDNEHFCNNE__HNIHOIAMDPC
                                                              (__this_00,pSVar4,(MethodInfo *)0x0);
                                                  }
                    /* try { // try from 035ded30 to 036ded37 has its CatchHandler @ 035dee54 */
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_2806/*"AlignTargetAttributes"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 035ded44 to 036ded4f has its CatchHandler @ 035dee4c */
                                                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                    /* try { // try from 035ded50 to 036dee1f has its CatchHandler @ 035debb4 */
                                                    __this_16 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->HNPCJGMHLCM;
                                                    if (__this_16 ==
                                                        (
                                                  System_Collections_Generic_List_JGIFDELCGOJ__o *)
                                                  0x0) goto LAB_035df82c;
                                                  iVar2 = (__this_16->fields)._size;
                                                  (__this_16->fields)._size = 0;
                                                  (__this_16->fields)._version =
                                                       (__this_16->fields)._version + 1;
                                                  if (iVar2 < 1) {
                                                    collection = JGIFDELCGOJ__KJNFEIJBDAH
                                                                           (pSVar4,(MethodInfo *)0x0
                                                                           );
                                                  }
                                                  else {
                                                    System_Array__Clear((System_Array_o *)
                                                                        (__this_16->fields)._items,0
                                                                        ,iVar2,(MethodInfo *)0x0);
                                                    __this_16 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->HNPCJGMHLCM;
                                                    collection = JGIFDELCGOJ__KJNFEIJBDAH
                                                                           (pSVar4,(MethodInfo *)0x0
                                                                           );
                                                    if (__this_16 ==
                                                        (
                                                  System_Collections_Generic_List_JGIFDELCGOJ__o *)
                                                  0x0) goto LAB_035df82c;
                                                  }
                                                  System_Collections_Generic_List<object>__AddRange
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_16,
                                                  (System_Collections_Generic_IEnumerable_T__o *)
                                                  collection,
                                                  Method_System_Collections_Generic_List<JGIFDELCGOJ>_AddRange__
                                                  );
                                                  }
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_4837/*"CounterPunches"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,2,(MethodInfo *)0x0);
                    /* try { // try from 035dee20 to 036dee27 has its CatchHandler @ 035dee58 */
                    /* try { // try from 035dee28 to 036dee2b has its CatchHandler @ 035dee50 */
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                    /* try { // try from 035dee2c to 036dee2f has its CatchHandler @ 035debb4 */
                    /* try { // try from 035dee30 to 036dee33 has its CatchHandler @ 035dee48 */
                                                    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 035dee34 to 036dee3b has its CatchHandler @ 035debb4 */
                                                  }
                    /* try { // try from 035dee3c to 036dee43 has its CatchHandler @ 035dee44 */
                                                  MGNPHCAAEIO_TypeInfo->static_fields->BJPEOININJC =
                                                       iVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dee3c with catch @ 035dee44
                       try { // try from 035dee44 to 036dee77 has its CatchHandler @ 035debb4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dee30 with catch @ 035dee48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ded44 with catch @ 035dee4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dee28 with catch @ 035dee50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ded30 with catch @ 035dee54
                        */
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,
                                                                      StringLiteral_11378/*"RewardsPrize"*/,
                                                                      (HPFNHDMAFAJ->klass->vtable).
                                                                      _51_get_Item.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dee20 with catch @ 035dee58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035decd0 with catch @ 035dee5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dec74 with catch @ 035dee60
                        */
                                                  __this_04 = MGNPHCAAEIO_TypeInfo->static_fields->
                                                              GLNHBABKGAD;
                                                  if (__this_04 != (JFDNJGDAMHJ_o *)0x0) {
                    /* try { // try from 035dee78 to 036dee7b has its CatchHandler @ 035dee88 */
                                                    JFDNJGDAMHJ__HNIHOIAMDPC
                                                              (__this_04,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035dee78 with catch @ 035dee88 */
                    /* try { // try from 035dee90 to 036deef7 has its CatchHandler @ 035def0c */
                                                    auVar13 = (*(HPFNHDMAFAJ->klass->vtable).
                                                                _51_get_Item.methodPtr)
                                                                        (HPFNHDMAFAJ,
                                                                         StringLiteral_10996/*"RaitingFight"*/,
                                                                         (HPFNHDMAFAJ->klass->vtable
                                                                         )._51_get_Item.method);
                                                    method_00 = auVar13._8_8_;
                                                    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(ANFOHCGLHID_TypeInfo);
                                                      method_00 = extraout_x1;
                                                    }
                                                    ANFOHCGLHID__BGBHHJCEPEE
                                                              (auVar13._0_8_,method_00);
                                                    pSVar4 = (System_Xml_XmlNode_o *)
                                                             (*(HPFNHDMAFAJ->klass->vtable).
                                                               _51_get_Item.methodPtr)
                                                                       (HPFNHDMAFAJ,
                                                                        StringLiteral_4894/*"CriticalHit"*/,
                                                                        (HPFNHDMAFAJ->klass->vtable)
                                                                        ._51_get_Item.method);
                                                    __this_05 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->EKPKJENEGPC;
                                                    if (__this_05 != (GPJEDNEEAFK_o *)0x0) {
                    /* try { // try from 035deef8 to 036def03 has its CatchHandler @ 035debb4 */
                                                      GPJEDNEEAFK__HNIHOIAMDPC
                                                                (__this_05,pSVar4,(MethodInfo *)0x0)
                                                      ;
                    /* try { // try from 035def04 to 036def0b has its CatchHandler @ 035def0c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035dee90 with catch @ 035def0c
                       catch(type#2 @ 00000000) { ... } // from try @ 035def04 with catch @ 035def0c
                        */
                                                      pSVar4 = (System_Xml_XmlNode_o *)
                                                               (*(HPFNHDMAFAJ->klass->vtable).
                                                                 _51_get_Item.methodPtr)
                                                                         (HPFNHDMAFAJ,
                                                                          StringLiteral_7121/*"HitEffects"*/,
                                                                          (HPFNHDMAFAJ->klass->
                                                                          vtable)._51_get_Item.
                                                                          method);
                                                      __this_06 = MGNPHCAAEIO_TypeInfo->
                                                                  static_fields->PJHCPELBBKN;
                                                      if (__this_06 != (KDDFEFJOIJP_o *)0x0) {
                                                        KDDFEFJOIJP__HNIHOIAMDPC
                                                                  (__this_06,pSVar4,
                                                                   (MethodInfo *)0x0);
                                                        pSVar4 = (System_Xml_XmlNode_o *)
                                                                 (*(HPFNHDMAFAJ->klass->vtable).
                                                                   _51_get_Item.methodPtr)
                                                                           (HPFNHDMAFAJ,
                                                                            StringLiteral_11996/*"Shock"*/,
                                                                            (HPFNHDMAFAJ->klass->
                                                                            vtable)._51_get_Item.
                                                                            method);
                                                        __this_07 = MGNPHCAAEIO_TypeInfo->
                                                                    static_fields->NLFJFKCJEAC;
                                                        if (__this_07 != (PFOFJCIOLOG_o *)0x0) {
                                                          PFOFJCIOLOG__HNIHOIAMDPC
                                                                    (__this_07,pSVar4,
                                                                     (MethodInfo *)0x0);
                                                          pSVar4 = (System_Xml_XmlNode_o *)
                                                                   (*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_3772/*"Camera"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                          if (DAT_04566ab3 == '\0') {
                                                            FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                            DAT_04566ab3 = '\x01';
                                                          }
                                                          if ((MGNPHCAAEIO_TypeInfo->_2).
                                                              cctor_finished == 0) {
                                                            thunk_FUN_01ba7564();
                                                          }
                                                          __this_01 = MGNPHCAAEIO_TypeInfo->
                                                                      static_fields->EBNPOGPNMGH;
                                                          if (__this_01 !=
                                                              (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) {
                                                            MGNPHCAAEIO_CEMCIPLHMKD__HNIHOIAMDPC
                                                                      (__this_01,pSVar4,
                                                                       (MethodInfo *)0x0);
                                                            pSVar4 = (System_Xml_XmlNode_o *)
                                                                     (*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_12000/*"Shop"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                            ;
                                                            __this_08 = MGNPHCAAEIO_TypeInfo->
                                                                        static_fields->DPKGHMMEOMP;
                                                            if (__this_08 != (LKHOKLCLKNH_o *)0x0) {
                                                              LKHOKLCLKNH__HNIHOIAMDPC
                                                                        (__this_08,pSVar4,
                                                                         (MethodInfo *)0x0);
                                                              pSVar4 = (System_Xml_XmlNode_o *)
                                                                       (*(HPFNHDMAFAJ->klass->vtable
                                                                         )._51_get_Item.methodPtr)
                                                                                 (HPFNHDMAFAJ,
                                                                                  StringLiteral_4919/*"Currencies"*/
                                                                                  ,(HPFNHDMAFAJ->
                                                                                    klass->vtable).
                                                                                   _51_get_Item.
                                                                                   method);
                                                              __this_09 = MGNPHCAAEIO_TypeInfo->
                                                                          static_fields->BHAAICEFMBC
                                                              ;
                                                              if (__this_09 !=
                                                                  (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0)
                                                              {
                                                                MGNPHCAAEIO_HLAKGGFFNAO__HNIHOIAMDPC
                                                                          (__this_09,pSVar4,
                                                                           (MethodInfo *)0x0);
                                                                pSVar4 = (System_Xml_XmlNode_o *)
                                                                         (*(HPFNHDMAFAJ->klass->
                                                                           vtable)._51_get_Item.
                                                                           methodPtr)(HPFNHDMAFAJ,
                                                                                                                                                                            
                                                  StringLiteral_11313/*"Resistances"*/,
                                                  (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                                                  __this_10 = MGNPHCAAEIO_TypeInfo->static_fields->
                                                              JIKLPLFKEDI;
                                                  if (__this_10 != (MGNPHCAAEIO_MACDOBFPDPP_o *)0x0)
                                                  {
                                                    MGNPHCAAEIO_MACDOBFPDPP__HNIHOIAMDPC
                                                              (__this_10,pSVar4,(MethodInfo *)0x0);
                                                    pSVar4 = (System_Xml_XmlNode_o *)
                                                             (*(HPFNHDMAFAJ->klass->vtable).
                                                               _51_get_Item.methodPtr)
                                                                       (HPFNHDMAFAJ,
                                                                        StringLiteral_3397/*"BarScales"*/,
                                                                        (HPFNHDMAFAJ->klass->vtable)
                                                                        ._51_get_Item.method);
                                                    __this_11 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->CKACCOEFOEA;
                                                    if (__this_11 != (DNICJALNLEB_o *)0x0) {
                                                      DNICJALNLEB__HNIHOIAMDPC
                                                                (__this_11,pSVar4,(MethodInfo *)0x0)
                                                      ;
                                                      pSVar4 = (System_Xml_XmlNode_o *)
                                                               (*(HPFNHDMAFAJ->klass->vtable).
                                                                 _51_get_Item.methodPtr)
                                                                         (HPFNHDMAFAJ,
                                                                          StringLiteral_8772/*"Magic"*/,
                                                                          (HPFNHDMAFAJ->klass->
                                                                          vtable)._51_get_Item.
                                                                          method);
                                                      __this_12 = MGNPHCAAEIO_TypeInfo->
                                                                  static_fields->BGPBFADNJKE;
                                                      if (__this_12 != (IDLLJHPDAHE_o *)0x0) {
                                                        IDLLJHPDAHE__HNIHOIAMDPC
                                                                  (__this_12,pSVar4,
                                                                   (MethodInfo *)0x0);
                                                        pSVar4 = (System_Xml_XmlNode_o *)
                                                                 (*(HPFNHDMAFAJ->klass->vtable).
                                                                   _51_get_Item.methodPtr)
                                                                           (HPFNHDMAFAJ,
                                                                            StringLiteral_2717/*"AchievementCounter"*/,
                                                                            (HPFNHDMAFAJ->klass->
                                                                            vtable)._51_get_Item.
                                                                            method);
                                                        __this_13 = MGNPHCAAEIO_TypeInfo->
                                                                    static_fields->PHHNGOGNMAG;
                                                        if (__this_13 !=
                                                            (MGNPHCAAEIO_ONAGKGIEEGI_o *)0x0) {
                                                          MGNPHCAAEIO_ONAGKGIEEGI__HNIHOIAMDPC
                                                                    (__this_13,pSVar4,
                                                                     (MethodInfo *)0x0);
                                                          pSVar4 = (System_Xml_XmlNode_o *)
                                                                   (*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_11154/*"Regeneration"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                          if (DAT_04568805 == '\0') {
                                                            FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                            DAT_04568805 = '\x01';
                                                          }
                                                          if ((MGNPHCAAEIO_TypeInfo->_2).
                                                              cctor_finished == 0) {
                                                            thunk_FUN_01ba7564();
                                                          }
                                                          pMVar9 = MGNPHCAAEIO_TypeInfo->
                                                                   static_fields->NMICOFIAFIC;
                                                          if (pMVar9 != (MGNPHCAAEIO_GNBEOEJBMKL_o *
                                                                        )0x0) {
                                                            MGNPHCAAEIO_GNBEOEJBMKL__HNIHOIAMDPC
                                                                      (pMVar9,pSVar4,
                                                                       (MethodInfo *)0x0);
                                                            pSVar4 = (System_Xml_XmlNode_o *)
                                                                     (*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_8428/*"Lifesteal"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                            ;
                                                            if (DAT_04567f8b == '\0') {
                                                              FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                                                              DAT_04567f8b = '\x01';
                                                            }
                                                            if ((MGNPHCAAEIO_TypeInfo->_2).
                                                                cctor_finished == 0) {
                                                              thunk_FUN_01ba7564();
                                                            }
                                                            pMVar9 = MGNPHCAAEIO_TypeInfo->
                                                                     static_fields->DKPDNFKLPIN;
                                                            if (pMVar9 != (MGNPHCAAEIO_GNBEOEJBMKL_o
                                                                           *)0x0) {
                                                              MGNPHCAAEIO_GNBEOEJBMKL__HNIHOIAMDPC
                                                                        (pMVar9,pSVar4,
                                                                         (MethodInfo *)0x0);
                                                              plVar5 = (long *)(*(HPFNHDMAFAJ->klass
                                                                                 ->vtable).
                                                                                 _51_get_Item.
                                                                                 methodPtr)(
                                                  HPFNHDMAFAJ,StringLiteral_6579/*"FrameRate"*/,
                                                  (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,0x3c,(MethodInfo *)0x0);
                                                  MGNPHCAAEIO_TypeInfo->static_fields->KGPNMHJKPKF =
                                                       iVar2;
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_14788/*"VideoAdCounterReset"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,0,(MethodInfo *)0x0);
                                                  MGNPHCAAEIO_TypeInfo->static_fields->OIAMENKHCNO =
                                                       iVar2;
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_6666/*"GUI"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if (plVar5 != (long *)0x0) {
                                                    pSVar4 = (System_Xml_XmlNode_o *)
                                                             (**(code **)(*plVar5 + 0x468))
                                                                       (plVar5,StringLiteral_3420/*"Basic"*/,
                                                                        *(undefined8 *)
                                                                         (*plVar5 + 0x470));
                                                    if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(DLAFGNMCMFA_TypeInfo);
                                                    }
                                                    DLAFGNMCMFA__HNIHOIAMDPC
                                                              (pSVar4,(MethodInfo *)0x0);
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_6666/*"GUI"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                                                    if (plVar5 != (long *)0x0) {
                                                      pSVar4 = (System_Xml_XmlNode_o *)
                                                               (**(code **)(*plVar5 + 0x468))
                                                                         (plVar5,StringLiteral_8819/*"Map"*/,
                                                                          *(undefined8 *)
                                                                           (*plVar5 + 0x470));
                                                      if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished
                                                          == 0) {
                                                        thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo);
                                                      }
                                                      MOAHCJAFGNJ__HNIHOIAMDPC
                                                                (pSVar4,(MethodInfo *)0x0);
                                                      plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable
                                                                         )._51_get_Item.methodPtr)
                                                                                 (HPFNHDMAFAJ,
                                                                                  StringLiteral_6666/*"GUI"*/
                                                                                  ,(HPFNHDMAFAJ->
                                                                                    klass->vtable).
                                                                                   _51_get_Item.
                                                                                   method);
                                                      if (plVar5 != (long *)0x0) {
                                                        pSVar4 = (System_Xml_XmlNode_o *)
                                                                 (**(code **)(*plVar5 + 0x468))
                                                                           (plVar5,
                                                  StringLiteral_6310/*"Fight"*/,
                                                  *(undefined8 *)(*plVar5 + 0x470));
                                                  LNEGPKPOLGO__HNIHOIAMDPC(pSVar4,(MethodInfo *)0x0)
                                                  ;
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_6666/*"GUI"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if (plVar5 != (long *)0x0) {
                                                    pSVar4 = (System_Xml_XmlNode_o *)
                                                             (**(code **)(*plVar5 + 0x468))
                                                                       (plVar5,StringLiteral_10491/*"Profile"*/,
                                                                        *(undefined8 *)
                                                                         (*plVar5 + 0x470));
                                                    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564(FIPOABEGELK_TypeInfo);
                                                    }
                                                    FIPOABEGELK__HNIHOIAMDPC
                                                              (pSVar4,(MethodInfo *)0x0);
                                                    plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.methodPtr)
                                                                               (HPFNHDMAFAJ,
                                                                                StringLiteral_6666/*"GUI"*/,
                                                                                (HPFNHDMAFAJ->klass
                                                                                ->vtable).
                                                                                _51_get_Item.method)
                                                    ;
                                                    if (plVar5 != (long *)0x0) {
                                                      pSVar4 = (System_Xml_XmlNode_o *)
                                                               (**(code **)(*plVar5 + 0x468))
                                                                         (plVar5,StringLiteral_8679/*"Lottery"*/,
                                                                          *(undefined8 *)
                                                                           (*plVar5 + 0x470));
                                                      KHLGHHMCKAE__HNIHOIAMDPC
                                                                (pSVar4,(MethodInfo *)0x0);
                                                      __this_15 = MGNPHCAAEIO_TypeInfo->
                                                                  static_fields->KCHKHLMEBJM;
                                                      pSVar4 = (System_Xml_XmlNode_o *)
                                                               (*(HPFNHDMAFAJ->klass->vtable).
                                                                 _51_get_Item.methodPtr)
                                                                         (HPFNHDMAFAJ,
                                                                          StringLiteral_8692/*"LotteryRerollPrices"*/,
                                                                          (HPFNHDMAFAJ->klass->
                                                                          vtable)._51_get_Item.
                                                                          method);
                                                      if (__this_15 !=
                                                          (MGNPHCAAEIO_LAKDLMLPLND_o *)0x0) {
                                                        MGNPHCAAEIO_LAKDLMLPLND__HNIHOIAMDPC
                                                                  (__this_15,pSVar4,
                                                                   (MethodInfo *)0x0);
                                                        plVar5 = (long *)(*(HPFNHDMAFAJ->klass->
                                                                           vtable)._51_get_Item.
                                                                           methodPtr)(HPFNHDMAFAJ,
                                                                                                                                                                            
                                                  StringLiteral_5051/*"DailyDebugMode"*/,
                                                  (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG
                                                                    (pSVar7,false,(MethodInfo *)0x0)
                                                  ;
                                                  MGNPHCAAEIO_TypeInfo->static_fields->JKJKPJHBFIO =
                                                       bVar1;
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_5052/*"DailyDebugTime"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar7,0,(MethodInfo *)0x0);
                                                  MGNPHCAAEIO_TypeInfo->static_fields->CIKPLHLKPKJ =
                                                       (long)iVar2;
                                                  auVar13 = (*(HPFNHDMAFAJ->klass->vtable).
                                                              _51_get_Item.methodPtr)
                                                                      (HPFNHDMAFAJ,
                                                                       StringLiteral_10634/*"QualityOptions"*/,
                                                                       (HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  ANFOHCGLHID__DPHFPNFAHIC
                                                            (auVar13._0_8_,auVar13._8_8_);
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_7118/*"Hints"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    if ((MGNPHCAAEIO_LGJODJDHCJF_TypeInfo->_2).
                                                        cctor_finished == 0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    MGNPHCAAEIO_LGJODJDHCJF__HNIHOIAMDPC
                                                              (pSVar4,(MethodInfo *)0x0);
                                                  }
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_3117/*"Aspects"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    MGNPHCAAEIO__EDMKKOOINBI
                                                              (pSVar4,(MethodInfo *)0x0);
                                                  }
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_3114/*"Aspect"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    MGNPHCAAEIO__IHFMJJAPNPJ
                                                              (pSVar4,(MethodInfo *)0x0);
                                                  }
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  MGNPHCAAEIO__AMNHPJHAJAK((MethodInfo *)0x0);
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,
                                                                      StringLiteral_12500/*"StyleLevels"*/,
                                                                      (HPFNHDMAFAJ->klass->vtable).
                                                                      _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    __this_02 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->EMBDCDBPFFE;
                                                    if (__this_02 == (NDGHNMIHOMN_o *)0x0)
                                                    goto LAB_035df82c;
                                                    NDGHNMIHOMN__HNIHOIAMDPC
                                                              (__this_02,pSVar4,(MethodInfo *)0x0);
                                                  }
                                                  plVar5 = (long *)(*(HPFNHDMAFAJ->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (HPFNHDMAFAJ,
                                                                              StringLiteral_8903/*"MaximumExperience"*/,
                                                                              (HPFNHDMAFAJ->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if ((plVar5 != (long *)0x0) &&
                                                     (pSVar6 = (System_Xml_XmlAttributeCollection_o
                                                                *)(**(code **)(*plVar5 + 0x238))
                                                                            (plVar5,*(undefined8 *)
                                                                                     (*plVar5 +
                                                                                     0x240)),
                                                     pSVar6 != (System_Xml_XmlAttributeCollection_o
                                                                *)0x0)) {
                                                    pSVar7 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar6,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  uVar3 = EIABCPKDEBD__FECKAJHFDJM
                                                                    (pSVar7,30000000,
                                                                     (MethodInfo *)0x0);
                                                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
                                                  }
                                                  MGNPHCAAEIO_TypeInfo->static_fields->NAAMIHMPKEB =
                                                       uVar3;
                                                  EMICHNICCIB = (System_Xml_XmlElement_o *)
                                                                (*(HPFNHDMAFAJ->klass->vtable).
                                                                  _51_get_Item.methodPtr)
                                                                          (HPFNHDMAFAJ,
                                                                           StringLiteral_14783/*"VibrationSettings"*/,
                                                                           (HPFNHDMAFAJ->klass->
                                                                           vtable)._51_get_Item.
                                                                           method);
                                                  MEFNOMDAJBF__ADNJKCLFCFH
                                                            (EMICHNICCIB,(MethodInfo *)0x0);
                                                  pSVar4 = (System_Xml_XmlNode_o *)
                                                           (*(HPFNHDMAFAJ->klass->vtable).
                                                             _51_get_Item.methodPtr)
                                                                     (HPFNHDMAFAJ,StringLiteral_2991/*"AntiCheatSettings"*/
                                                                      ,(HPFNHDMAFAJ->klass->vtable).
                                                                       _51_get_Item.method);
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished ==
                                                        0) {
                                                      thunk_FUN_01ba7564();
                                                    }
                                                    __this_03 = MGNPHCAAEIO_TypeInfo->static_fields
                                                                ->ODMIMKMDBPO;
                                                    if (__this_03 == (LMDGNPDFNKF_o *)0x0)
                                                    goto LAB_035df82c;
                                                    LMDGNPDFNKF__HNIHOIAMDPC
                                                              (__this_03,pSVar4,(MethodInfo *)0x0);
                                                  }
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
LAB_035df82c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LJMKLOBKBNH()  [RVA 0x34E109C]
// ANFOHCGLHID$$LJMKLOBKBNH @ RVA 0x34E109C

void ANFOHCGLHID__LJMKLOBKBNH(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  FOKJBDHLIMG_o *__this;
  
  if ((DAT_0456872f & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10511/*"Progress"*/);
    FUN_01bab630(&StringLiteral_4278/*"CharacterProgress.xml"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    DAT_0456872f = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_4278/*"CharacterProgress.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_10511/*"Progress"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar2 + 0x468))
                              (plVar2,StringLiteral_10239/*"Perks"*/,*(undefined8 *)(*plVar2 + 0x470));
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      __this = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this != (FOKJBDHLIMG_o *)0x0) {
        FOKJBDHLIMG__FBKGMIENPFK(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void BGBHHJCEPEE(XmlNode AHDGNOJPPIB)  [RVA 0x34E0C74]
// ANFOHCGLHID$$BGBHHJCEPEE @ RVA 0x34E0C74

/* WARNING: Removing unreachable block (ram,0x035e0f2c) */
/* WARNING: Removing unreachable block (ram,0x035e0fc8) */

void ANFOHCGLHID__BGBHHJCEPEE(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_string__o *__this;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *item;
  MethodInfo *extraout_x1;
  long lVar4;
  System_String_array *pSVar5;
  MGNPHCAAEIO_StaticFields *pMVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04568730 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_7235/*"IDS"*/);
    DAT_04568730 = 1;
    method = extraout_x1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_035e0db0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_035e0db0:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) goto LAB_035e0f20;
      lVar4 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_035e0ef8;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_035e0e10;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_035e0e10:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_7235/*"IDS"*/,(MethodInfo *)0x0);
    item = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    lVar4 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_035e0f14;
    }
  }
LAB_035e0ef8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_035e0f14:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_035e0f20:
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568806 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568806 = '\x01';
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields;
  pMVar6->DOBGPEEHMMD = __this;
  thunk_FUN_01c20e04(&pMVar6->DOBGPEEHMMD,__this);
  return;
}


// ===== private static void OHHANEKKNJJ(XmlNode AHDGNOJPPIB)  [RVA 0x34E11C0]
// ANFOHCGLHID$$OHHANEKKNJJ @ RVA 0x34E11C0

void ANFOHCGLHID__OHHANEKKNJJ(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  MethodInfo *extraout_x1;
  MMIIDELPHLP_o *__this;
  
  if ((DAT_04568731 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10999/*"Random"*/);
    DAT_04568731 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this = MGNPHCAAEIO_TypeInfo->static_fields->KCEBJCOAHDA;
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                   (AHDGNOJPPIB,StringLiteral_10999/*"Random"*/,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method
                   );
    if (__this != (MMIIDELPHLP_o *)0x0) {
      MMIIDELPHLP__HNIHOIAMDPC(__this,AHDGNOJPPIB_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string PPGCNAHEAME()  [RVA 0x34E0208]
// ANFOHCGLHID$$PPGCNAHEAME @ RVA 0x34E0208

System_String_o * ANFOHCGLHID__PPGCNAHEAME(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568732 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1612/*"1.0.12.0"*/);
    FUN_01bab630(&StringLiteral_1978/*"2.27.1.0"*/);
    DAT_04568732 = 1;
  }
  iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__KHIBBBCNMCJ(iVar2,(MethodInfo *)0x0);
  pSVar3 = StringLiteral_1978/*"2.27.1.0"*/;
  if (!bVar1) {
    iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    bVar1 = GNAFJMPJNKI__GDIGIFHOPAK(iVar2,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_1612/*"1.0.12.0"*/;
    if (!bVar1) {
      pSVar3 = (System_String_o *)0x0;
    }
  }
  return pSVar3;
}


// ===== public static bool DMEJHHPGDFA()  [RVA 0x34E1260]
// ANFOHCGLHID$$DMEJHHPGDFA @ RVA 0x34E1260

bool ANFOHCGLHID__DMEJHHPGDFA(MethodInfo *method)

{
  return true;
}


// ===== private static void KIGGIKNDOLP(XmlNode HPFNHDMAFAJ)  [RVA 0x34E088C]
// ANFOHCGLHID$$KIGGIKNDOLP @ RVA 0x34E088C

void ANFOHCGLHID__KIGGIKNDOLP(System_Xml_XmlNode_o *HPFNHDMAFAJ,MethodInfo *method)

{
  System_Xml_XmlNode_o *MNPCOGBCAED;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlNode_o *AHDGNOJPPIB_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB_02;
  System_Xml_XmlNode_o *AHDGNOJPPIB_03;
  System_Xml_XmlNode_o *AHDGNOJPPIB_04;
  CNKPEGNHNGO_o *__this;
  FOKJBDHLIMG_o *__this_00;
  FNEMMDECEIJ_o *pFVar1;
  OCABNNJIENC_o *__this_01;
  AGHKMJNGFOB_o *__this_02;
  EPFMFHDGMCE_o *__this_03;
  
  if ((DAT_04568733 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_9187/*"MoneyBaseValues"*/);
                    /* try { // try from 035e08cc to 036e08ef has its CatchHandler @ 035e0a48 */
    FUN_01bab630(&StringLiteral_10234/*"PerkTree"*/);
    FUN_01bab630(&StringLiteral_8411/*"LevelAttributeGain"*/);
    FUN_01bab630(&StringLiteral_4923/*"CurrencyBaseValues"*/);
                    /* try { // try from 035e08f0 to 036e0a23 has its CatchHandler @ 035e05cc */
    FUN_01bab630(&StringLiteral_13760/*"Thresholds"*/);
    FUN_01bab630(&StringLiteral_12388/*"StartingAttributes"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_8695/*"LotteryThresholds"*/);
    DAT_04568733 = 1;
  }
  if (HPFNHDMAFAJ != (System_Xml_XmlNode_o *)0x0) {
    MNPCOGBCAED = (System_Xml_XmlNode_o *)
                  (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                            (HPFNHDMAFAJ,StringLiteral_13760/*"Thresholds"*/,
                             (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
    (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
              (HPFNHDMAFAJ,StringLiteral_8695/*"LotteryThresholds"*/,(HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                  (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                            (HPFNHDMAFAJ,StringLiteral_10239/*"Perks"*/,
                             (HPFNHDMAFAJ->klass->vtable)._51_get_Item.method);
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                   (HPFNHDMAFAJ,StringLiteral_8411/*"LevelAttributeGain"*/,(HPFNHDMAFAJ->klass->vtable)._51_get_Item.method)
    ;
    AHDGNOJPPIB_01 =
         (System_Xml_XmlNode_o *)
         (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                   (HPFNHDMAFAJ,StringLiteral_12388/*"StartingAttributes"*/,(HPFNHDMAFAJ->klass->vtable)._51_get_Item.method
                   );
    AHDGNOJPPIB_02 =
         (System_Xml_XmlNode_o *)
         (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                   (HPFNHDMAFAJ,StringLiteral_10234/*"PerkTree"*/,(HPFNHDMAFAJ->klass->vtable)._51_get_Item.method
                   );
                    /* try { // try from 035e0a24 to 036e0a2b has its CatchHandler @ 035e0a4c */
                    /* try { // try from 035e0a2c to 036e0a33 has its CatchHandler @ 035e0a58 */
    AHDGNOJPPIB_03 =
         (System_Xml_XmlNode_o *)
         (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                   (HPFNHDMAFAJ,StringLiteral_4923/*"CurrencyBaseValues"*/,(HPFNHDMAFAJ->klass->vtable)._51_get_Item.method)
    ;
                    /* try { // try from 035e0a34 to 036e0a37 has its CatchHandler @ 035e05cc */
                    /* try { // try from 035e0a38 to 036e0a3b has its CatchHandler @ 035e0a44 */
                    /* try { // try from 035e0a3c to 036e0a6b has its CatchHandler @ 035e05cc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e0a38 with catch @ 035e0a44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e08cc with catch @ 035e0a48
                        */
    AHDGNOJPPIB_04 =
         (System_Xml_XmlNode_o *)
         (*(HPFNHDMAFAJ->klass->vtable)._51_get_Item.methodPtr)
                   (HPFNHDMAFAJ,StringLiteral_9187/*"MoneyBaseValues"*/,(HPFNHDMAFAJ->klass->vtable)._51_get_Item.method)
    ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e0a24 with catch @ 035e0a4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e0810 with catch @ 035e0a50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e07b4 with catch @ 035e0a54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e0a2c with catch @ 035e0a58
                        */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e0844 with catch @ 035e0a5c
                        */
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
                    /* try { // try from 035e0a6c to 036e0a6f has its CatchHandler @ 035e0a80 */
    __this = MGNPHCAAEIO_TypeInfo->static_fields->DLPAONNJNMA;
    if (__this != (CNKPEGNHNGO_o *)0x0) {
      CNKPEGNHNGO__HNIHOIAMDPC(__this,MNPCOGBCAED,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035e0a6c with catch @ 035e0a80 */
                    /* try { // try from 035e0a88 to 036e0aef has its CatchHandler @ 035e0b04 */
      __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this_00 != (FOKJBDHLIMG_o *)0x0) {
        FOKJBDHLIMG__FBKGMIENPFK(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
        pFVar1 = MGNPHCAAEIO_TypeInfo->static_fields->ICAEAIGLLPE;
        if (pFVar1 != (FNEMMDECEIJ_o *)0x0) {
          FNEMMDECEIJ__HNIHOIAMDPC(pFVar1,AHDGNOJPPIB_00,(MethodInfo *)0x0);
          pFVar1 = MGNPHCAAEIO_TypeInfo->static_fields->LMKEGJCEGOJ;
          if (pFVar1 != (FNEMMDECEIJ_o *)0x0) {
            FNEMMDECEIJ__HNIHOIAMDPC(pFVar1,AHDGNOJPPIB_01,(MethodInfo *)0x0);
            __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->PIBLPLGLODE;
            if (__this_01 != (OCABNNJIENC_o *)0x0) {
              OCABNNJIENC__HNIHOIAMDPC(__this_01,AHDGNOJPPIB_03,(MethodInfo *)0x0);
                    /* try { // try from 035e0af0 to 036e0afb has its CatchHandler @ 035e05cc */
              __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->OHJNLLIAANL;
                    /* try { // try from 035e0afc to 036e0b03 has its CatchHandler @ 035e0b04 */
              if (__this_02 != (AGHKMJNGFOB_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e0a88 with catch @ 035e0b04
                       catch(type#2 @ 00000000) { ... } // from try @ 035e0afc with catch @ 035e0b04
                        */
                AGHKMJNGFOB__HNIHOIAMDPC(__this_02,AHDGNOJPPIB_04,(MethodInfo *)0x0);
                __this_03 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
                if (__this_03 != (EPFMFHDGMCE_o *)0x0) {
                  EPFMFHDGMCE__HNIHOIAMDPC(__this_03,AHDGNOJPPIB_02,(MethodInfo *)0x0);
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


// ===== private static void LOLAOCBNCJD()  [RVA 0x34E041C]
// ANFOHCGLHID$$LOLAOCBNCJD @ RVA 0x34E041C

void ANFOHCGLHID__LOLAOCBNCJD(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04568734 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_5593/*"ERROR: loadTacticsSettings - wrong file"*/);
    FUN_01bab630(&StringLiteral_12818/*"TacticsSettings"*/);
    FUN_01bab630(&StringLiteral_21402/*"tacticSettings.xml"*/);
    DAT_04568734 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_21402/*"tacticSettings.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    auVar2 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_12818/*"TacticsSettings"*/,(pSVar1->klass->vtable)._51_get_Item.method);
    method_00 = auVar2._8_8_;
    if (auVar2._0_8_ != (System_Xml_XmlNode_o *)0x0) {
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      ANFOHCGLHID__OHHANEKKNJJ(auVar2._0_8_,method_00);
      return;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5593/*"ERROR: loadTacticsSettings - wrong file"*/,(MethodInfo *)0x0);
    return;
  }
  return;
}

