// TypeDefIndex 2960
// Namespace: 
// private class NGKBNOEJLPH.LNKLGCHOEBF
// Fields:
//   public ECENNHNBAME BNGDONJEHMH; // 0x10
//   public int FFNAHMNEHIM; // 0x18

// ===== public void .ctor()  [RVA 0x349DD4C]
// NGKBNOEJLPH.LNKLGCHOEBF$$.ctor @ RVA 0x349DD4C

void NGKBNOEJLPH_LNKLGCHOEBF___ctor(NGKBNOEJLPH_LNKLGCHOEBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BNGDONJEHMH = (ECENNHNBAME_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields).FFNAHMNEHIM = 0;
  return;
}


// ===== public void .ctor(ECENNHNBAME NLEBDPHNIDI, int CIHDDJHLBAA)  [RVA 0x349ACE0]
// NGKBNOEJLPH.LNKLGCHOEBF$$.ctor @ RVA 0x349ACE0

void NGKBNOEJLPH_LNKLGCHOEBF___ctor
               (NGKBNOEJLPH_LNKLGCHOEBF_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,int32_t CIHDDJHLBAA,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BNGDONJEHMH = NLEBDPHNIDI;
  thunk_FUN_01c20e04(&__this->fields,NLEBDPHNIDI);
  (__this->fields).FFNAHMNEHIM = CIHDDJHLBAA;
  return;
}


// ===== public bool FOPGOBKPNAA()  [RVA 0x349DD78]
// NGKBNOEJLPH.LNKLGCHOEBF$$FOPGOBKPNAA @ RVA 0x349DD78

bool NGKBNOEJLPH_LNKLGCHOEBF__FOPGOBKPNAA(NGKBNOEJLPH_LNKLGCHOEBF_o *__this,MethodInfo *method)

{
  return (__this->fields).FFNAHMNEHIM != -1;
}


// ===== public bool AOIHOPFAJNG()  [RVA 0x349DD88]
// NGKBNOEJLPH.LNKLGCHOEBF$$AOIHOPFAJNG @ RVA 0x349DD88

bool NGKBNOEJLPH_LNKLGCHOEBF__AOIHOPFAJNG(NGKBNOEJLPH_LNKLGCHOEBF_o *__this,MethodInfo *method)

{
  return (__this->fields).BNGDONJEHMH != (ECENNHNBAME_o *)0x0;
}

