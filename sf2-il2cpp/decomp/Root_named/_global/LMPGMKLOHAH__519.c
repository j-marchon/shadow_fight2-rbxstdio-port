// TypeDefIndex 519
// Namespace: 
// public class LMPGMKLOHAH : OPNMPAJKDMI
// Fields:

// ===== private bool HKENPKKABAB(POGBKGFBOLC IKKAMAMLIKA)  [RVA 0x3594018]
// LMPGMKLOHAH$$HKENPKKABAB @ RVA 0x3594018

bool LMPGMKLOHAH__HKENPKKABAB(LMPGMKLOHAH_o *__this,POGBKGFBOLC_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  Roster_o *pAVar2;
  
  pAVar2 = (__this->fields).super.FOJBBDCJDFH;
  if (((pAVar2 != (Roster_o *)0x0) && (IKKAMAMLIKA != (POGBKGFBOLC_o *)0x0)) &&
     (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    bVar1 = GGHCLMEFIGO__JFPMAKABBOK
                      (__this_00,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HOOAAGABMBL PLJKGEJHILJ, Roster BHENDAGDGME, MapButtonController GMFEBFOGDAA)  [RVA 0x3594044]
// LMPGMKLOHAH$$.ctor @ RVA 0x3594044

void LMPGMKLOHAH___ctor(LMPGMKLOHAH_o *__this,HOOAAGABMBL_o *PLJKGEJHILJ,Roster_o *BHENDAGDGME,
                       MapButtonController_o *GMFEBFOGDAA,MethodInfo *method)

{
  OPNMPAJKDMI___ctor((OPNMPAJKDMI_o *)__this,PLJKGEJHILJ,BHENDAGDGME,GMFEBFOGDAA,(MethodInfo *)0x0);
  return;
}


// ===== public override IAMJIBPAOBA NHGGBEACKBD()  [RVA 0x359404C]
// LMPGMKLOHAH$$NHGGBEACKBD @ RVA 0x359404C

int32_t LMPGMKLOHAH__NHGGBEACKBD(LMPGMKLOHAH_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public override bool NLMHNIFKDOA()  [RVA 0x3594054]
// LMPGMKLOHAH$$NLMHNIFKDOA @ RVA 0x3594054

bool LMPGMKLOHAH__NLMHNIFKDOA(LMPGMKLOHAH_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *source;
  System_Func_TSource__bool__o *predicate;
  
  if ((DAT_04568d8f & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<POGBKGFBOLC>__);
    FUN_01bab630(&System_Func<POGBKGFBOLC,_bool>_TypeInfo);
    FUN_01bab630(&Method_LMPGMKLOHAH_HKENPKKABAB__);
    DAT_04568d8f = 1;
  }
  bVar1 = OPNMPAJKDMI__NLMHNIFKDOA((OPNMPAJKDMI_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  source = OPNMPAJKDMI__HOBICLIEIIJ((OPNMPAJKDMI_o *)__this,(MethodInfo *)0x0);
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<POGBKGFBOLC,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  bVar1 = System_Linq_Enumerable__Any<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                     Method_System_Linq_Enumerable_Any<POGBKGFBOLC>__);
  return bVar1;
}

