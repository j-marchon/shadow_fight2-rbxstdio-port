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
    FUN_01bab630(&StringLiteral_16576);
                    /* try { // try from 0341e534 to 0351e54b has its CatchHandler @ 0341e6cc */
    FUN_01bab630(&StringLiteral_16861);
    FUN_01bab630(&StringLiteral_19537);
    DAT_0456782c = 1;
  }
  ppSVar2 = &(__this->fields).AMCOHAKHNKD;
  *ppSVar2 = HDDLNFJEKID;
  thunk_FUN_01c20e04(ppSVar2,HDDLNFJEKID);
                    /* try { // try from 0341e564 to 0351e573 has its CatchHandler @ 0341e770 */
  if (HDDLNFJEKID != (Sfs2X_Entities_Data_SFSObject_o *)0x0) {
    iVar1 = (*(HDDLNFJEKID->klass->vtable)._34_GetInt.methodPtr)
                      (HDDLNFJEKID,StringLiteral_16861,
                       (HDDLNFJEKID->klass->vtable)._34_GetInt.method);
    (__this->fields).ODECJNJDMPF = iVar1;
    pSVar3 = (System_String_o *)
             (*(HDDLNFJEKID->klass->vtable)._36_GetUtfString.methodPtr)
                       (HDDLNFJEKID,StringLiteral_19537,
                        (HDDLNFJEKID->klass->vtable)._36_GetUtfString.method);
                    /* try { // try from 0341e5b4 to 0351e5db has its CatchHandler @ 0341e6d0 */
    (__this->fields).EBCALIJLIFB = pSVar3;
    thunk_FUN_01c20e04();
    pSVar4 = (Sfs2X_Util_ByteArray_o *)
             (*(HDDLNFJEKID->klass->vtable)._37_GetByteArray.methodPtr)
                       (HDDLNFJEKID,StringLiteral_16576,
                        (HDDLNFJEKID->klass->vtable)._37_GetByteArray.method);
    ppSVar5 = &(__this->fields).LEFIMDMINPE;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

