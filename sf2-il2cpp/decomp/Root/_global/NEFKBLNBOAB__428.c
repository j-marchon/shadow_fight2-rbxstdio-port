// TypeDefIndex 428
// Namespace: 
// public abstract class NEFKBLNBOAB
// Fields:
//   protected string DAIOCIKMNFD; // 0x10
//   protected bool HGCCJGDKCLH; // 0x18

// ===== public virtual bool BKCFPHNEONL(JMDPBFOCHHP GALCGHPGAIB, LDBDCAICCPP EJLPDCKEJFJ)  [RVA 0x348B258]
// NEFKBLNBOAB$$BKCFPHNEONL @ RVA 0x348B258

bool NEFKBLNBOAB__BKCFPHNEONL
               (NEFKBLNBOAB_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,LDBDCAICCPP_o *EJLPDCKEJFJ,
               MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  System_String_o *CJNHFNHJHPE;
  System_Xml_XmlDocument_o *pSVar3;
  
  if (EJLPDCKEJFJ == (LDBDCAICCPP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CJNHFNHJHPE = (System_String_o *)
                (*(EJLPDCKEJFJ->klass->vtable)._5_unknown.methodPtr)
                          (EJLPDCKEJFJ,(__this->fields).DAIOCIKMNFD,
                           (EJLPDCKEJFJ->klass->vtable)._5_unknown.method);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields).HGCCJGDKCLH;
  }
  pSVar3 = GIAMPEGMNHE__KGEKFIHAHLJ(CJNHFNHJHPE,true,false,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0358b2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
                    (__this,GALCGHPGAIB,pSVar3,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return (bool)uVar2;
}


// ===== protected virtual bool HNIHOIAMDPC(JMDPBFOCHHP GALCGHPGAIB, XmlDocument LKILNGEECIJ)  [RVA 0x348B2DC]
// NEFKBLNBOAB$$HNIHOIAMDPC @ RVA 0x348B2DC

bool NEFKBLNBOAB__HNIHOIAMDPC
               (NEFKBLNBOAB_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  return true;
}


// ===== protected void .ctor(string HEEJOJAGIKC, bool DMNKFLBEEOB = False)  [RVA 0x348B2E4]
// NEFKBLNBOAB$$.ctor @ RVA 0x348B2E4

void NEFKBLNBOAB___ctor(NEFKBLNBOAB_o *__this,System_String_o *HEEJOJAGIKC,bool DMNKFLBEEOB,
                       MethodInfo *method)

{
                    /* try { // try from 0358b2e4 to 0368b2eb has its CatchHandler @ 0358b3a4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).DAIOCIKMNFD = HEEJOJAGIKC;
  thunk_FUN_01c20e04(&__this->fields,HEEJOJAGIKC);
                    /* try { // try from 0358b310 to 0368b317 has its CatchHandler @ 0358b398 */
  (__this->fields).HGCCJGDKCLH = DMNKFLBEEOB;
  return;
}

