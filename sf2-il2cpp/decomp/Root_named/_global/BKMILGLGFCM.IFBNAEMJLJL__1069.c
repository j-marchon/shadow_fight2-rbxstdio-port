// TypeDefIndex 1069
// Namespace: 
// public class BKMILGLGFCM.IFBNAEMJLJL : PDBDELCMKJG.DGCHKODLPJG<BKMILGLGFCM.IFBNAEMJLJL>
// Fields:
//   private WWWForm ICDKHOOOACE; // 0x38
//   private Action<DMKKAPNMDKJ> BLNMHHKCCOD; // 0x40

// ===== protected override void ALFGGEHJPGL()  [RVA 0x30DC884]
// BKMILGLGFCM.IFBNAEMJLJL$$ALFGGEHJPGL @ RVA 0x30DC884

void BKMILGLGFCM_IFBNAEMJLJL__ALFGGEHJPGL(BKMILGLGFCM_IFBNAEMJLJL_o *__this,MethodInfo *method)

{
  System_ArgumentNullException_o *__this_00;
  System_String_o *paramName;
  undefined8 uVar1;
  
  if ((DAT_04566361 & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_ALFGGEHJPGL__);
    DAT_04566361 = 1;
  }
  PDBDELCMKJG_DGCHKODLPJG<object>__ALFGGEHJPGL
            ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)__this,
             Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_ALFGGEHJPGL__);
  if ((__this->fields).ICDKHOOOACE != (UnityEngine_WWWForm_o *)0x0) {
    return;
  }
  thunk_FUN_01bb9178(&System_ArgumentNullException_TypeInfo);
  __this_00 = (System_ArgumentNullException_o *)thunk_FUN_01bda818();
  paramName = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_6550/*"Form"*/);
  System_ArgumentNullException___ctor(__this_00,paramName,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_BKMILGLGFCM_IFBNAEMJLJL_ALFGGEHJPGL__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== public void .ctor()  [RVA 0x30DC920]
// BKMILGLGFCM.IFBNAEMJLJL$$.ctor @ RVA 0x30DC920

void BKMILGLGFCM_IFBNAEMJLJL___ctor(BKMILGLGFCM_IFBNAEMJLJL_o *__this,MethodInfo *method)

{
  if ((DAT_04566362 & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>__ctor__);
    DAT_04566362 = 1;
  }
  PDBDELCMKJG_DGCHKODLPJG<object>___ctor
            ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)__this,
             Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>__ctor__);
  return;
}


// ===== public BKMILGLGFCM.IFBNAEMJLJL EMCCAHPOFDA(WWWForm OFOIILMAIPG)  [RVA 0x30DC968]
// BKMILGLGFCM.IFBNAEMJLJL$$EMCCAHPOFDA @ RVA 0x30DC968

BKMILGLGFCM_IFBNAEMJLJL_o *
BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA
          (BKMILGLGFCM_IFBNAEMJLJL_o *__this,UnityEngine_WWWForm_o *OFOIILMAIPG,MethodInfo *method)

{
  (__this->fields).ICDKHOOOACE = OFOIILMAIPG;
  thunk_FUN_01c20e04();
  return __this;
}


// ===== public BKMILGLGFCM HFMIGKLONNL()  [RVA 0x30DC984]
// BKMILGLGFCM.IFBNAEMJLJL$$HFMIGKLONNL @ RVA 0x30DC984

BKMILGLGFCM_o *
BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(BKMILGLGFCM_IFBNAEMJLJL_o *__this,MethodInfo *method)

{
  System_TimeSpan_o MINHPKOPAIE;
  System_Threading_CancellationToken_o DEMAKGLNJNN;
  Il2CppObject *OKECKCEAHNA;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Collections_Generic_List_ValueTuple_string__string___o *__this_00;
  System_ValueTuple_string__string__array *EJAPBMFFKII;
  BKMILGLGFCM_o *__this_01;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  System_String_o *CJFAPGEEPLM;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if ((DAT_04566363 & 1) == 0) {
    FUN_01bab630(&BKMILGLGFCM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<string,_string>>_ToArray__);
    DAT_04566363 = 1;
  }
  (*(__this->klass->vtable)._4_ALFGGEHJPGL.methodPtr)
            (__this,(__this->klass->vtable)._4_ALFGGEHJPGL.method);
  __this_00 = (__this->fields).super.PADLEGCJHIA;
  if (__this_00 != (System_Collections_Generic_List_ValueTuple_string__string___o *)0x0) {
    MINHPKOPAIE.fields._ticks =
         (System_TimeSpan_Fields)(__this->fields).super.KBFOKFPKAKN.fields._ticks;
    OKECKCEAHNA = (__this->fields).super.OGFMJIABHHI;
    CJFAPGEEPLM = (__this->fields).super.PHONOLEMBHN;
    EJAPBMFFKII = (System_ValueTuple_string__string__array *)
                  System_Collections_Generic_List<ValueTuple<object,_object>>__ToArray
                            ((System_Collections_Generic_List_T__o *)__this_00,
                             Method_System_Collections_Generic_List<ValueTuple<string,_string>>_ToArray__
                            );
    DEMAKGLNJNN.fields._source =
         (System_Threading_CancellationToken_Fields)
         (__this->fields).super.DKICFPOCAFF.fields._source;
    OFOIILMAIPG = (__this->fields).ICDKHOOOACE;
    BLMFLPJJMPF = (__this->fields).BLNMHHKCCOD;
    __this_01 = (BKMILGLGFCM_o *)thunk_FUN_01bda818(BKMILGLGFCM_TypeInfo);
    BKMILGLGFCM___ctor(__this_01,CJFAPGEEPLM,MINHPKOPAIE,OKECKCEAHNA,EJAPBMFFKII,DEMAKGLNJNN,
                       OFOIILMAIPG,BLMFLPJJMPF,in_stack_ffffffffffffffa0);
    return __this_01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BKMILGLGFCM.IFBNAEMJLJL EOHMFJFFFIN()  [RVA 0x30DCA64]
// BKMILGLGFCM.IFBNAEMJLJL$$EOHMFJFFFIN @ RVA 0x30DCA64

BKMILGLGFCM_IFBNAEMJLJL_o * BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN(MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  if ((DAT_04566364 & 1) == 0) {
    FUN_01bab630(&BKMILGLGFCM_IFBNAEMJLJL_TypeInfo);
    DAT_04566364 = 1;
  }
  auVar1 = thunk_FUN_01bda818(BKMILGLGFCM_IFBNAEMJLJL_TypeInfo);
  BKMILGLGFCM_IFBNAEMJLJL___ctor(auVar1._0_8_,auVar1._8_8_);
  return auVar1._0_8_;
}


// ===== public BKMILGLGFCM.IFBNAEMJLJL JLDAALDPGIE(Action<DMKKAPNMDKJ> BLMFLPJJMPF)  [RVA 0x30DCAB4]
// BKMILGLGFCM.IFBNAEMJLJL$$JLDAALDPGIE @ RVA 0x30DCAB4

BKMILGLGFCM_IFBNAEMJLJL_o *
BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE
          (BKMILGLGFCM_IFBNAEMJLJL_o *__this,System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF,
          MethodInfo *method)

{
  (__this->fields).BLNMHHKCCOD = BLMFLPJJMPF;
  thunk_FUN_01c20e04();
  return __this;
}

