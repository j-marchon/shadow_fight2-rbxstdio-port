// TypeDefIndex 3042
// Namespace: 
// public class KLPJOKOFLJD
// Fields:
//   private readonly HashSet<byte[]> BOFADCNNCPO; // 0x10
//   private readonly MD5 CCHGABMGBIJ; // 0x18

// ===== public bool LFENGGKOJDO(string NONPLOOOOAG, string BBGJDIIFLBC)  [RVA 0x34B7AD0]
// KLPJOKOFLJD$$LFENGGKOJDO @ RVA 0x34B7AD0

bool KLPJOKOFLJD__LFENGGKOJDO
               (KLPJOKOFLJD_o *__this,System_String_o *NONPLOOOOAG,System_String_o *BBGJDIIFLBC,
               MethodInfo *method)

{
  bool bVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Security_Cryptography_HashAlgorithm_o *__this_00;
  
                    /* try { // try from 035b7ad0 to 036b7b03 has its CatchHandler @ 035b789c */
  if ((DAT_045685a0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<byte[]>_Add__);
                    /* try { // try from 035b7b04 to 036b7b07 has its CatchHandler @ 035b7b18 */
                    /* try { // try from 035b7b08 to 036b7b0f has its CatchHandler @ 035b7b1c */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<byte[]>_Contains__);
                    /* try { // try from 035b7b10 to 036b7b43 has its CatchHandler @ 035b789c */
    DAT_045685a0 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7aac with catch @ 035b7b14
                        */
  __this_00 = (System_Security_Cryptography_HashAlgorithm_o *)(__this->fields).CCHGABMGBIJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7b04 with catch @ 035b7b18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7b08 with catch @ 035b7b1c
                        */
  pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a60 with catch @ 035b7b20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a3c with catch @ 035b7b24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a2c with catch @ 035b7b28
                        */
  pSVar3 = System_Environment__get_NewLine((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7a14 with catch @ 035b7b2c
                        */
  pSVar3 = System_String__Concat(NONPLOOOOAG,pSVar3,BBGJDIIFLBC,(MethodInfo *)0x0);
  if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* try { // try from 035b7b44 to 036b7b47 has its CatchHandler @ 035b7b68 */
                    /* try { // try from 035b7b48 to 036b7b6f has its CatchHandler @ 035b789c */
    pSVar4 = (System_Byte_array *)
             (*(pSVar2->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar2,pSVar3,(pSVar2->klass->vtable)._19_GetBytes.method);
    if (__this_00 != (System_Security_Cryptography_HashAlgorithm_o *)0x0) {
                    /* catch() { ... } // from try @ 035b7b44 with catch @ 035b7b68 */
      pSVar4 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                         (__this_00,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 035b7b70 to 036b7b77 has its CatchHandler @ 035b7b8c */
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).BOFADCNNCPO;
      if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* try { // try from 035b7b78 to 036b7b83 has its CatchHandler @ 035b789c */
                    /* try { // try from 035b7b84 to 036b7b8b has its CatchHandler @ 035b7b8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b7b70 with catch @ 035b7b8c
                       catch(type#2 @ 00000000) { ... } // from try @ 035b7b84 with catch @ 035b7b8c
                        */
                    /* try { // try from 035b7b90 to 036b7cbf has its CatchHandler @ 035b7b90
                       catch() { ... } // from try @ 035b7b90 with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7d50 with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7dcc with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7dfc with catch @ 035b7b90
                       catch() { ... } // from try @ 035b7e2c with catch @ 035b7b90 */
        bVar1 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar5,&pSVar4->obj,
                           Method_System_Collections_Generic_HashSet<byte[]>_Contains__);
        if (!bVar1) {
          pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).BOFADCNNCPO;
          if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_035b7bd0;
          System_Collections_Generic_HashSet<object>__Add
                    (pSVar5,&pSVar4->obj,Method_System_Collections_Generic_HashSet<byte[]>_Add__);
        }
        return (bool)(~bVar1 & 1);
      }
    }
  }
LAB_035b7bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34B7BD4]
// KLPJOKOFLJD$$.ctor @ RVA 0x34B7BD4

void KLPJOKOFLJD___ctor(KLPJOKOFLJD_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Security_Cryptography_MD5_o *pSVar1;
  MethodInfo *extraout_x1;
  System_Security_Cryptography_MD5_o **ppSVar2;
  
  if ((DAT_045685a1 & 1) == 0) {
    FUN_01bab630(&KLPJOKOFLJD_EDDJLFOOBCI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<byte[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<byte[]>_TypeInfo);
    DAT_045685a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KLPJOKOFLJD_EDDJLFOOBCI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<byte[]>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_01,(System_Collections_Generic_IEqualityComparer_T__o *)__this_00,
             Method_System_Collections_Generic_HashSet<byte[]>__ctor__);
  (__this->fields).BOFADCNNCPO = (System_Collections_Generic_HashSet_byte____o *)__this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).CCHGABMGBIJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

