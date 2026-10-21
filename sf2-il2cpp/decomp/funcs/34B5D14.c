// OJEHKJHEBID$$.ctor @ RVA 0x34B5D14

void OJEHKJHEBID___ctor(OJEHKJHEBID_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o **ppGVar1;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o **ppGVar2;
  
  if ((DAT_0456858c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_TypeInfo);
                    /* try { // try from 035b5d90 to 036b5eab has its CatchHandler @ 035b5d90
                       catch() { ... } // from try @ 035b5d90 with catch @ 035b5d90
                       catch() { ... } // from try @ 035b5f9c with catch @ 035b5d90
                       catch() { ... } // from try @ 035b5fe8 with catch @ 035b5d90
                       catch() { ... } // from try @ 035b602c with catch @ 035b5d90
                       catch() { ... } // from try @ 035b605c with catch @ 035b5d90 */
    FUN_01bab630(&StringLiteral_1);
    DAT_0456858c = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this_00 = (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>__ctor__);
  ppGVar1 = &(__this->fields).MABPCBMOECE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>__ctor__);
  ppGVar2 = &(__this->fields).MJIHCLLODMF;
  *ppGVar2 = __this_01;
  thunk_FUN_01c20e04(ppGVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

