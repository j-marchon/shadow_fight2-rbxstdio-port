// TypeDefIndex 59
// Namespace: 
// public class JMDPBFOCHHP.EBEGCDCOHHJ
// Fields:
//   public int GHLADMPGEGP; // 0x10
//   public string JIJLBFGKNJK; // 0x18
//   public string ABCHAOKFLGL; // 0x20
//   public string OPBJKMDPKLG; // 0x28
//   public List<JMDPBFOCHHP.EBEGCDCOHHJ.EALAJNADPCK> KPFGHBEKJIM; // 0x30
//   public JMDPBFOCHHP.EBEGCDCOHHJ.COMPPNIAOGK HMAFPGLFDDP; // 0x38
//   public JMDPBFOCHHP.EBEGCDCOHHJ.PGBKNGBLPCD AMAMLPJLCFG; // 0x40
//   public XmlDocument PBIBOFJFPGP; // 0x48

// ===== public void .ctor()  [RVA 0x2FFB494]
// JMDPBFOCHHP.EBEGCDCOHHJ$$.ctor @ RVA 0x2FFB494

void JMDPBFOCHHP_EBEGCDCOHHJ___ctor(JMDPBFOCHHP_EBEGCDCOHHJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK__o **ppSVar1;
  JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_o *__this_01;
  JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_o **ppJVar2;
  JMDPBFOCHHP_EBEGCDCOHHJ_PGBKNGBLPCD_o *__this_02;
  JMDPBFOCHHP_EBEGCDCOHHJ_PGBKNGBLPCD_o **ppJVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad5 & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK>_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_EBEGCDCOHHJ_PGBKNGBLPCD_TypeInfo);
    DAT_04565ad5 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK>__ctor__);
  ppSVar1 = &(__this->fields).KPFGHBEKJIM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_o *)
              thunk_FUN_01bda818(JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  ppJVar2 = &(__this->fields).HMAFPGLFDDP;
  *ppJVar2 = __this_01;
  thunk_FUN_01c20e04(ppJVar2,__this_01);
  __this_02 = (JMDPBFOCHHP_EBEGCDCOHHJ_PGBKNGBLPCD_o *)
              thunk_FUN_01bda818(JMDPBFOCHHP_EBEGCDCOHHJ_PGBKNGBLPCD_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  ppJVar3 = &(__this->fields).AMAMLPJLCFG;
  *ppJVar3 = __this_02;
  thunk_FUN_01c20e04(ppJVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

