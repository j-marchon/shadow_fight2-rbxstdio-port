// TypeDefIndex 2034
// Namespace: 
// public class DNHIGNPMAGE
// Fields:
//   public InfoAnimation BNGDONJEHMH; // 0x10
//   public int HIHFJJOMDBF; // 0x18
//   public int KPOBFGCNFAG; // 0x1C
//   public bool FMGLHJDODPA; // 0x20
//   public int JAHFGPMFLGN; // 0x24

// ===== public bool KGGGJNCEPLF()  [RVA 0x32A8054]
// DNHIGNPMAGE$$KGGGJNCEPLF @ RVA 0x32A8054

bool DNHIGNPMAGE__KGGGJNCEPLF(DNHIGNPMAGE_o *__this,MethodInfo *method)

{
                    /* try { // try from 033a8060 to 034a8067 has its CatchHandler @ 033a8118 */
  return (__this->fields).BNGDONJEHMH == (InfoAnimation_o *)0x0;
}


// ===== public void NDNPGAKJLHM()  [RVA 0x32A8064]
// DNHIGNPMAGE$$NDNPGAKJLHM @ RVA 0x32A8064

void DNHIGNPMAGE__NDNPGAKJLHM(DNHIGNPMAGE_o *__this,MethodInfo *method)

{
                    /* try { // try from 033a806c to 034a8083 has its CatchHandler @ 033a8128 */
  (__this->fields).BNGDONJEHMH = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields).FMGLHJDODPA = false;
  (__this->fields).HIHFJJOMDBF = 0;
  (__this->fields).KPOBFGCNFAG = 0;
  (__this->fields).JAHFGPMFLGN = -1;
  return;
}


// ===== public void .ctor()  [RVA 0x32A8094]
// DNHIGNPMAGE$$.ctor @ RVA 0x32A8094

void DNHIGNPMAGE___ctor(DNHIGNPMAGE_o *__this,MethodInfo *method)

{
                    /* try { // try from 033a8094 to 034a80d3 has its CatchHandler @ 033a812c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BNGDONJEHMH = (InfoAnimation_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields).FMGLHJDODPA = false;
  (__this->fields).HIHFJJOMDBF = 0;
  (__this->fields).KPOBFGCNFAG = 0;
  (__this->fields).JAHFGPMFLGN = -1;
  return;
}

