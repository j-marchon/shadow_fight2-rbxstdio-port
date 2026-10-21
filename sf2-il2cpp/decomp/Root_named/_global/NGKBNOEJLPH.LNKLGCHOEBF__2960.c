// TypeDefIndex 2960
// Namespace: 
// private class ModelAi.LNKLGCHOEBF
// Fields:
//   public InfoAnimation BNGDONJEHMH; // 0x10
//   public int FFNAHMNEHIM; // 0x18

// ===== public void .ctor()  [RVA 0x349DD4C]
// ModelAi.LNKLGCHOEBF$$.ctor @ RVA 0x349DD4C

void ModelAi_LNKLGCHOEBF___ctor(ModelAi_LNKLGCHOEBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BNGDONJEHMH = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields).FFNAHMNEHIM = 0;
  return;
}


// ===== public void .ctor(InfoAnimation NLEBDPHNIDI, int CIHDDJHLBAA)  [RVA 0x349ACE0]
// ModelAi.LNKLGCHOEBF$$.ctor @ RVA 0x349ACE0

void ModelAi_LNKLGCHOEBF___ctor
               (ModelAi_LNKLGCHOEBF_o *__this,InfoAnimation_o *NLEBDPHNIDI,int32_t CIHDDJHLBAA,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BNGDONJEHMH = NLEBDPHNIDI;
  thunk_FUN_01c20e04(&__this->fields,NLEBDPHNIDI);
  (__this->fields).FFNAHMNEHIM = CIHDDJHLBAA;
  return;
}


// ===== public bool FOPGOBKPNAA()  [RVA 0x349DD78]
// ModelAi.LNKLGCHOEBF$$FOPGOBKPNAA @ RVA 0x349DD78

bool ModelAi_LNKLGCHOEBF__FOPGOBKPNAA(ModelAi_LNKLGCHOEBF_o *__this,MethodInfo *method)

{
  return (__this->fields).FFNAHMNEHIM != -1;
}


// ===== public bool AOIHOPFAJNG()  [RVA 0x349DD88]
// ModelAi.LNKLGCHOEBF$$AOIHOPFAJNG @ RVA 0x349DD88

bool ModelAi_LNKLGCHOEBF__AOIHOPFAJNG(ModelAi_LNKLGCHOEBF_o *__this,MethodInfo *method)

{
  return (__this->fields).BNGDONJEHMH != (InfoAnimation_o *)0x0;
}

