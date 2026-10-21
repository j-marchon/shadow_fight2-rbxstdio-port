// TypeDefIndex 1359
// Namespace: 
// public class BKHDDKOEEKP
// Fields:
//   private const int DFCOMCDAJHI = 3;
//   private int EKCBLJBMMEF; // 0x10
//   private BKHDDKOEEKP.BGGNJLLOHII OCDJDKPIFOB; // 0x14
//   private int LFMCNPMCDKO; // 0x18
//   private int LLLOHJDPPJA; // 0x1C
//   private int BCIBONAJEAM; // 0x20
//   private int POOJLDKNOEL; // 0x24
//   private int GEJHANEMJEE; // 0x28
//   private bool FGJBGIGIFPA; // 0x2C
//   private int AHECMEHDIKD; // 0x30
//   private int JOEMKMMKAAE; // 0x34

// ===== public void .ctor()  [RVA 0x3167B60]
// BKHDDKOEEKP$$.ctor @ RVA 0x3167B60

void BKHDDKOEEKP___ctor(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03267b24 with catch @ 03267b60
                       catch() { ... } // from try @ 03267b58 with catch @ 03267b60 */
  (__this->fields).FGJBGIGIFPA = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MGEMOHEBNPF()  [RVA 0x3167B70]
// BKHDDKOEEKP$$MGEMOHEBNPF @ RVA 0x3167B70

void BKHDDKOEEKP__MGEMOHEBNPF(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).AHECMEHDIKD;
  iVar2 = iVar1 + -1;
  if (((0 < iVar1) && ((__this->fields).AHECMEHDIKD = iVar2, iVar2 == 0)) &&
     (iVar1 = (__this->fields).JOEMKMMKAAE, 0 < iVar1)) {
    iVar2 = (__this->fields).BCIBONAJEAM;
    (__this->fields).JOEMKMMKAAE = 0;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    (__this->fields).LLLOHJDPPJA = (__this->fields).LLLOHJDPPJA + 1;
    (__this->fields).BCIBONAJEAM = iVar2;
    return;
  }
  return;
}


// ===== private void OACNBBDMLAB()  [RVA 0x3167BB0]
// BKHDDKOEEKP$$OACNBBDMLAB @ RVA 0x3167BB0

void BKHDDKOEEKP__OACNBBDMLAB(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (__this->fields).JOEMKMMKAAE;
  if (0 < iVar2) {
    iVar1 = (__this->fields).BCIBONAJEAM;
    (__this->fields).JOEMKMMKAAE = 0;
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    (__this->fields).LLLOHJDPPJA = (__this->fields).LLLOHJDPPJA + 1;
    (__this->fields).BCIBONAJEAM = iVar1;
  }
  return;
}


// ===== private bool LOIMDPJNODK()  [RVA 0x3167BD8]
// BKHDDKOEEKP$$LOIMDPJNODK @ RVA 0x3167BD8

bool BKHDDKOEEKP__LOIMDPJNODK(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
  return 2 < (__this->fields).BCIBONAJEAM;
}


// ===== public void KOKMNPGLOPL()  [RVA 0x3167BE8]
// BKHDDKOEEKP$$KOKMNPGLOPL @ RVA 0x3167BE8

void BKHDDKOEEKP__KOKMNPGLOPL(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
  (__this->fields).EKCBLJBMMEF = (__this->fields).EKCBLJBMMEF + 1;
  return;
}


// ===== public void KIAGFPAFOAG(BKHDDKOEEKP.BGGNJLLOHII CJNHFNHJHPE)  [RVA 0x3167BF8]
// BKHDDKOEEKP$$KIAGFPAFOAG @ RVA 0x3167BF8

void BKHDDKOEEKP__KIAGFPAFOAG(BKHDDKOEEKP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).OCDJDKPIFOB;
  if (iVar1 <= CJNHFNHJHPE) {
    iVar1 = CJNHFNHJHPE;
  }
  (__this->fields).OCDJDKPIFOB = iVar1;
  return;
}


// ===== public void KOKMNPGLOPL(float NJFOOFKBEAA, float HFKHEGLCHBB)  [RVA 0x3167C0C]
// BKHDDKOEEKP$$KOKMNPGLOPL @ RVA 0x3167C0C

void BKHDDKOEEKP__KOKMNPGLOPL
               (BKHDDKOEEKP_o *__this,float NJFOOFKBEAA,float HFKHEGLCHBB,MethodInfo *method)

{
  if (NJFOOFKBEAA == HFKHEGLCHBB) {
    (__this->fields).EKCBLJBMMEF = (__this->fields).EKCBLJBMMEF + 1;
  }
  return;
}


// ===== public BKHDDKOEEKP.BGGNJLLOHII HGDIKOFOEEA()  [RVA 0x3167C24]
// BKHDDKOEEKP$$HGDIKOFOEEA @ RVA 0x3167C24

int32_t BKHDDKOEEKP__HGDIKOFOEEA(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
  return (__this->fields).OCDJDKPIFOB;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x3167C2C]
// BKHDDKOEEKP$$DGLJCGNHLIG @ RVA 0x3167C2C

void BKHDDKOEEKP__DGLJCGNHLIG(BKHDDKOEEKP_o *__this,MethodInfo *method)

{
  (__this->fields).FGJBGIGIFPA = true;
  (__this->fields).AHECMEHDIKD = 0;
  (__this->fields).JOEMKMMKAAE = 0;
  return;
}

