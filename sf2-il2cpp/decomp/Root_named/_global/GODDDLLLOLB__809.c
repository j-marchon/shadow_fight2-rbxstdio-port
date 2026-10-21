// TypeDefIndex 809
// Namespace: 
// public class GODDDLLLOLB
// Fields:
//   public float AKPNOPAEKEF; // 0x10
//   public float HFBHMJBLLOI; // 0x14

// ===== public void .ctor(float DBKPKMNHDJM = 0, float BELNEEBKIJC = 0)  [RVA 0x3073BC8]
// GODDDLLLOLB$$.ctor @ RVA 0x3073BC8

void GODDDLLLOLB___ctor(GODDDLLLOLB_o *__this,float DBKPKMNHDJM,float BELNEEBKIJC,MethodInfo *method
                       )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).AKPNOPAEKEF = DBKPKMNHDJM;
  (__this->fields).HFBHMJBLLOI = BELNEEBKIJC;
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB, float PEOKPEHNMLN = 0, float IIHOAHOBBCE = 0)  [RVA 0x3073BF4]
// GODDDLLLOLB$$HNIHOIAMDPC @ RVA 0x3073BF4

void GODDDLLLOLB__HNIHOIAMDPC
               (GODDDLLLOLB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,float PEOKPEHNMLN,
               float IIHOAHOBBCE,MethodInfo *method)

{
  float fVar1;
  MGNDHCBAPEN_float__float__o *pMVar2;
  
  pMVar2 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,PEOKPEHNMLN,IIHOAHOBBCE,(MethodInfo *)0x0);
  if (pMVar2 != (MGNDHCBAPEN_float__float__o *)0x0) {
    fVar1 = (pMVar2->fields).DOKHHBGJICA;
    (__this->fields).AKPNOPAEKEF = (pMVar2->fields).PHPELPFMOII;
    (__this->fields).HFBHMJBLLOI = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

