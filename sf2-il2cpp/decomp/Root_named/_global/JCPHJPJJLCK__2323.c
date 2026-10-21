// TypeDefIndex 2323
// Namespace: 
// public class JCPHJPJJLCK
// Fields:
//   protected int ODECJNJDMPF; // 0x10
//   protected string EBCALIJLIFB; // 0x18
//   protected ByteArray LEFIMDMINPE; // 0x20
//   protected SFSObject AMCOHAKHNKD; // 0x28

// ===== public void .ctor()  [RVA 0x331E500]
// JCPHJPJJLCK$$.ctor @ RVA 0x331E500

void JCPHJPJJLCK___ctor(JCPHJPJJLCK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void GIENGNEGHPJ(SFSObject HDDLNFJEKID)  [RVA 0x331E508]
// JCPHJPJJLCK$$GIENGNEGHPJ @ RVA 0x331E508

void JCPHJPJJLCK__GIENGNEGHPJ
               (JCPHJPJJLCK_o *__this,Sfs2X_Entities_Data_SFSObject_o *HDDLNFJEKID,
               MethodInfo *method)

{
  int32_t iVar1;
  Sfs2X_Entities_Data_SFSObject_o **ppSVar2;
  System_String_o *pSVar3;
  Sfs2X_Util_ByteArray_o *pSVar4;
  Sfs2X_Util_ByteArray_o **ppSVar5;
  
  if ((DAT_0456782c & 1) == 0) {
    FUN_01bab630(&StringLiteral_16576/*"b"*/);
                    /* try { // try from 0341e534 to 0351e54b has its CatchHandler @ 0341e6cc */
    FUN_01bab630(&StringLiteral_16861/*"c"*/);
    FUN_01bab630(&StringLiteral_19537/*"m"*/);
    DAT_0456782c = 1;
  }
  ppSVar2 = &(__this->fields).AMCOHAKHNKD;
  *ppSVar2 = HDDLNFJEKID;
  thunk_FUN_01c20e04(ppSVar2,HDDLNFJEKID);
                    /* try { // try from 0341e564 to 0351e573 has its CatchHandler @ 0341e770 */
  if (HDDLNFJEKID != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    iVar1 = (*(HDDLNFJEKID->klass->vtable)._34_GetInt.methodPtr)
                      (HDDLNFJEKID,StringLiteral_16861/*"c"*/,
                       (HDDLNFJEKID->klass->vtable)._34_GetInt.method);
    (__this->fields).ODECJNJDMPF = iVar1;
    pSVar3 = (System_String_o *)
             (*(HDDLNFJEKID->klass->vtable)._36_GetUtfString.methodPtr)
                       (HDDLNFJEKID,StringLiteral_19537/*"m"*/,
                        (HDDLNFJEKID->klass->vtable)._36_GetUtfString.method);
                    /* try { // try from 0341e5b4 to 0351e5db has its CatchHandler @ 0341e6d0 */
    (__this->fields).EBCALIJLIFB = pSVar3;
    thunk_FUN_01c20e04();
    pSVar4 = (Sfs2X_Util_ByteArray_o *)
             (*(HDDLNFJEKID->klass->vtable)._37_GetByteArray.methodPtr)
                       (HDDLNFJEKID,StringLiteral_16576/*"b"*/,
                        (HDDLNFJEKID->klass->vtable)._37_GetByteArray.method);
    ppSVar5 = &(__this->fields).LEFIMDMINPE;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string CNNCHPPECHP()  [RVA 0x331E5FC]
// JCPHJPJJLCK$$CNNCHPPECHP @ RVA 0x331E5FC

System_String_o * JCPHJPJJLCK__CNNCHPPECHP(JCPHJPJJLCK_o *__this,MethodInfo *method)

{
                    /* try { // try from 0341e5fc to 0351e607 has its CatchHandler @ 0341e6c4 */
  return (__this->fields).EBCALIJLIFB;
}


// ===== public ByteArray EJJDBEJHPLI()  [RVA 0x331E604]
// JCPHJPJJLCK$$EJJDBEJHPLI @ RVA 0x331E604

Sfs2X_Util_ByteArray_o * JCPHJPJJLCK__EJJDBEJHPLI(JCPHJPJJLCK_o *__this,MethodInfo *method)

{
                    /* try { // try from 0341e608 to 0351e613 has its CatchHandler @ 0341e6c0 */
  return (__this->fields).LEFIMDMINPE;
}


// ===== public int IDMHFKHBCDA()  [RVA 0x331E60C]
// JCPHJPJJLCK$$IDMHFKHBCDA @ RVA 0x331E60C

int32_t JCPHJPJJLCK__IDMHFKHBCDA(JCPHJPJJLCK_o *__this,MethodInfo *method)

{
  return (__this->fields).ODECJNJDMPF;
}

