// TypeDefIndex 2627
// Namespace: 
// public class BOGDEGPCIJI
// Fields:
//   private const float HFBMPOINIIC = 1.05;
//   private Vector2 <DNEIPDBFPIA>k__BackingField; // 0x10
//   private float <POODCHFIIJJ>k__BackingField; // 0x18
//   private GPDLLNADCPK <COIENECLAAM>k__BackingField; // 0x1C
//   private Color <BFEKLJGLHEH>k__BackingField; // 0x20
//   private Vector2 <BNFHGCOJLAL>k__BackingField; // 0x30
//   private bool <HNPLLELOEDH>k__BackingField; // 0x38
//   private Vector2 <NMFGNNFJOIE>k__BackingField; // 0x3C
//   private int <ELEEJOFMOIG>k__BackingField; // 0x44

// ===== public Vector2 JHLKONICGCA()  [RVA 0x33B2378]
// BOGDEGPCIJI$$JHLKONICGCA @ RVA 0x33B2378

UnityEngine_Vector2_o BOGDEGPCIJI__JHLKONICGCA(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._DNEIPDBFPIA_k__BackingField.fields;
}


// ===== public Vector2 EKPCHGDOCJA()  [RVA 0x33B2380]
// BOGDEGPCIJI$$EKPCHGDOCJA @ RVA 0x33B2380

UnityEngine_Vector2_o BOGDEGPCIJI__EKPCHGDOCJA(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._NMFGNNFJOIE_k__BackingField.fields;
}


// ===== public void IAIOGBPAABH(float LIKMOBLLLBP)  [RVA 0x33B2388]
// BOGDEGPCIJI$$IAIOGBPAABH @ RVA 0x33B2388

void BOGDEGPCIJI__IAIOGBPAABH(BOGDEGPCIJI_o *__this,float LIKMOBLLLBP,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  UnityEngine_Vector2_Fields UVar3;
  
  fVar2 = (__this->fields)._DNEIPDBFPIA_k__BackingField.fields.y;
  if (LIKMOBLLLBP < fVar2) {
    UVar3 = (__this->fields)._NMFGNNFJOIE_k__BackingField.fields;
    fVar2 = LIKMOBLLLBP / fVar2;
    UVar1.y = UVar3.y * fVar2;
    UVar1.x = UVar3.x * fVar2;
    (__this->fields)._NMFGNNFJOIE_k__BackingField.fields = UVar1;
  }
  return;
}


// ===== public int OEFHIAKBAFK()  [RVA 0x33B23A8]
// BOGDEGPCIJI$$OEFHIAKBAFK @ RVA 0x33B23A8

int32_t BOGDEGPCIJI__OEFHIAKBAFK(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (__this->fields)._ELEEJOFMOIG_k__BackingField;
}


// ===== public Vector2 GCMGMGMCMNK()  [RVA 0x33B23B0]
// BOGDEGPCIJI$$GCMGMGMCMNK @ RVA 0x33B23B0

UnityEngine_Vector2_o BOGDEGPCIJI__GCMGMGMCMNK(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  fVar1 = (__this->fields)._POODCHFIIJJ_k__BackingField * 1.05;
  UVar2.fields.x = (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.x * fVar1;
  UVar2.fields.y = fVar1 * (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.y;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// ===== private void LJGIFDBOCNN(Color CJNHFNHJHPE)  [RVA 0x33B23D0]
// BOGDEGPCIJI$$LJGIFDBOCNN @ RVA 0x33B23D0

void BOGDEGPCIJI__LJGIFDBOCNN
               (BOGDEGPCIJI_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = CJNHFNHJHPE.fields.r;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = CJNHFNHJHPE.fields.g;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = CJNHFNHJHPE.fields.b;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = CJNHFNHJHPE.fields.a;
  return;
}


// ===== private void JOFBDNKIMEP(Vector2 CJNHFNHJHPE)  [RVA 0x33B23DC]
// BOGDEGPCIJI$$JOFBDNKIMEP @ RVA 0x33B23DC

void BOGDEGPCIJI__JOFBDNKIMEP
               (BOGDEGPCIJI_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BNFHGCOJLAL_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._BNFHGCOJLAL_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public Color GLIBGECPOPG()  [RVA 0x33B23E4]
// BOGDEGPCIJI$$GLIBGECPOPG @ RVA 0x33B23E4

UnityEngine_Color_o BOGDEGPCIJI__GLIBGECPOPG(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._BFEKLJGLHEH_k__BackingField.fields;
}


// ===== public void EIFAJBGDKEC(int CJNHFNHJHPE)  [RVA 0x33B23F0]
// BOGDEGPCIJI$$EIFAJBGDKEC @ RVA 0x33B23F0

void BOGDEGPCIJI__EIFAJBGDKEC(BOGDEGPCIJI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ELEEJOFMOIG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void PFENCIKDBLE(Vector2 CJNHFNHJHPE)  [RVA 0x33B23F8]
// BOGDEGPCIJI$$PFENCIKDBLE @ RVA 0x33B23F8

void BOGDEGPCIJI__PFENCIKDBLE
               (BOGDEGPCIJI_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public Vector2 BNIPHCLHLMP()  [RVA 0x33B2400]
// BOGDEGPCIJI$$BNIPHCLHLMP @ RVA 0x33B2400

UnityEngine_Vector2_o BOGDEGPCIJI__BNIPHCLHLMP(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector2_o)(__this->fields)._BNFHGCOJLAL_k__BackingField.fields;
}


// ===== private void FCLCLFGJEFM(GPDLLNADCPK CJNHFNHJHPE)  [RVA 0x33B2408]
// BOGDEGPCIJI$$FCLCLFGJEFM @ RVA 0x33B2408

void BOGDEGPCIJI__FCLCLFGJEFM(BOGDEGPCIJI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIENECLAAM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(Vector2 POBPDPGICBA, float JKOJPEKLBCI, GPDLLNADCPK DHNDOPBLBOI, Color EFJKPCADGJH, Vector2 MJBMLNKAPGC, bool NBKBMNOLGHN)  [RVA 0x33B2410]
// BOGDEGPCIJI$$.ctor @ RVA 0x33B2410

void BOGDEGPCIJI___ctor(BOGDEGPCIJI_o *__this,UnityEngine_Vector2_o POBPDPGICBA,float JKOJPEKLBCI,
                       int32_t DHNDOPBLBOI,UnityEngine_Color_o EFJKPCADGJH,
                       UnityEngine_Vector2_o MJBMLNKAPGC,bool NBKBMNOLGHN,MethodInfo *method)

{
  (__this->fields)._ELEEJOFMOIG_k__BackingField = -1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.x = POBPDPGICBA.fields.x;
  (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.y = POBPDPGICBA.fields.y;
  (__this->fields)._DNEIPDBFPIA_k__BackingField.fields.x = POBPDPGICBA.fields.x;
  (__this->fields)._DNEIPDBFPIA_k__BackingField.fields.y = POBPDPGICBA.fields.y;
  (__this->fields)._POODCHFIIJJ_k__BackingField = JKOJPEKLBCI;
  (__this->fields)._COIENECLAAM_k__BackingField = DHNDOPBLBOI;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = EFJKPCADGJH.fields.a;
  (__this->fields)._BNFHGCOJLAL_k__BackingField.fields.x = MJBMLNKAPGC.fields.x;
  (__this->fields)._BNFHGCOJLAL_k__BackingField.fields.y = MJBMLNKAPGC.fields.y;
  (__this->fields)._HNPLLELOEDH_k__BackingField = NBKBMNOLGHN;
  return;
}


// ===== public GPDLLNADCPK BMLHGADHENC()  [RVA 0x33B24B0]
// BOGDEGPCIJI$$BMLHGADHENC @ RVA 0x33B24B0

int32_t BOGDEGPCIJI__BMLHGADHENC(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIENECLAAM_k__BackingField;
}


// ===== public Vector2 GEPJOMPBPBI(float COKDAPPLGKH)  [RVA 0x33B24B8]
// BOGDEGPCIJI$$GEPJOMPBPBI @ RVA 0x33B24B8

UnityEngine_Vector2_o
BOGDEGPCIJI__GEPJOMPBPBI(BOGDEGPCIJI_o *__this,float COKDAPPLGKH,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  fVar1 = (__this->fields)._POODCHFIIJJ_k__BackingField;
  UVar2.fields.x = (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.x * COKDAPPLGKH * fVar1;
  UVar2.fields.y = (__this->fields)._NMFGNNFJOIE_k__BackingField.fields.y * COKDAPPLGKH * fVar1;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// ===== private void MNDHAAMHNID(bool CJNHFNHJHPE)  [RVA 0x33B24D4]
// BOGDEGPCIJI$$MNDHAAMHNID @ RVA 0x33B24D4

void BOGDEGPCIJI__MNDHAAMHNID(BOGDEGPCIJI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HNPLLELOEDH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void INLEKLAIDGJ(float CJNHFNHJHPE)  [RVA 0x33B24E0]
// BOGDEGPCIJI$$INLEKLAIDGJ @ RVA 0x33B24E0

void BOGDEGPCIJI__INLEKLAIDGJ(BOGDEGPCIJI_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._POODCHFIIJJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool MADAOMNMKFA()  [RVA 0x33B24E8]
// BOGDEGPCIJI$$MADAOMNMKFA @ RVA 0x33B24E8

bool BOGDEGPCIJI__MADAOMNMKFA(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (__this->fields)._HNPLLELOEDH_k__BackingField;
}


// ===== private void HCNIDNBCAKM(Vector2 CJNHFNHJHPE)  [RVA 0x33B24F0]
// BOGDEGPCIJI$$HCNIDNBCAKM @ RVA 0x33B24F0

void BOGDEGPCIJI__HCNIDNBCAKM
               (BOGDEGPCIJI_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DNEIPDBFPIA_k__BackingField.fields.x = CJNHFNHJHPE.fields.x;
  (__this->fields)._DNEIPDBFPIA_k__BackingField.fields.y = CJNHFNHJHPE.fields.y;
  return;
}


// ===== public float JMAHLDGKJAK()  [RVA 0x33B24F8]
// BOGDEGPCIJI$$JMAHLDGKJAK @ RVA 0x33B24F8

float BOGDEGPCIJI__JMAHLDGKJAK(BOGDEGPCIJI_o *__this,MethodInfo *method)

{
  return (__this->fields)._POODCHFIIJJ_k__BackingField;
}

