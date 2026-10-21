// TypeDefIndex 2526
// Namespace: 
// public class BIEHNLODKBK : CNIGOFCKBGI
// Fields:

// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x338F970]
// BIEHNLODKBK$$GOGPCNMIJOB @ RVA 0x338F970

CNIGOFCKBGI_o * BIEHNLODKBK__GOGPCNMIJOB(BIEHNLODKBK_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  MethodInfo *extraout_x1;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04567c13 & 1) == 0) {
    FUN_01bab630(&BIEHNLODKBK_TypeInfo);
    DAT_04567c13 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(BIEHNLODKBK_TypeInfo,method);
    CNIGOFCKBGI___ctor(__this_00,0x14,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0
                      );
    if (__this_00 != (CNIGOFCKBGI_o *)0x0) {
      (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x338FA00]
// BIEHNLODKBK$$.ctor @ RVA 0x338FA00

void BIEHNLODKBK___ctor(BIEHNLODKBK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x14,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  return;
}

