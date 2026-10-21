// TypeDefIndex 774
// Namespace: 
// public class Roster.MDHCBOFHAEL
// Fields:
//   private Dictionary<string, OLKPEJMEBPJ> DEKLKEHGJEB; // 0x10

// ===== public OLKPEJMEBPJ KNMENIBLFGF(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x305D234]
// Roster.MDHCBOFHAEL$$KNMENIBLFGF @ RVA 0x305D234

OLKPEJMEBPJ_o *
Roster_MDHCBOFHAEL__KNMENIBLFGF
          (Roster_MDHCBOFHAEL_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  OLKPEJMEBPJ_o *local_28;
  
  if ((DAT_04565f0c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_TryGetValue__);
    DAT_04565f0c = 1;
  }
  local_28 = (OLKPEJMEBPJ_o *)0x0;
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).DEKLKEHGJEB;
    key = (Il2CppObject *)
          (*(DBIAAJNKHLH->klass->vtable)._3_ToString.methodPtr)
                    (DBIAAJNKHLH,(DBIAAJNKHLH->klass->vtable)._3_ToString.method);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                (__this_00,key,(Il2CppObject **)&local_28,
                 Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_TryGetValue__);
      return local_28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Dictionary.ValueCollection<string, OLKPEJMEBPJ> JDHAHDALAOA()  [RVA 0x3059024]
// Roster.MDHCBOFHAEL$$JDHAHDALAOA @ RVA 0x3059024

System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *
Roster_MDHCBOFHAEL__JDHAHDALAOA(Roster_MDHCBOFHAEL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_get_Values__);
    DAT_04565f0d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = (System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Values
                       (__this_00,
                        Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_get_Values__
                       );
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void LFENGGKOJDO(OLKPEJMEBPJ BANHBMINMMP)  [RVA 0x3060F40]
// Roster.MDHCBOFHAEL$$LFENGGKOJDO @ RVA 0x3060F40

void Roster_MDHCBOFHAEL__LFENGGKOJDO
               (Roster_MDHCBOFHAEL_o *__this,OLKPEJMEBPJ_o *BANHBMINMMP,MethodInfo *method)

{
  OLKPEJMEBPJ_o *pOVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *pSVar3;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04565f0e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Add__);
    FUN_01bab630(&StringLiteral_3427/*"Battle already exists: "*/);
    DAT_04565f0e = 1;
  }
  if (BANHBMINMMP != (OLKPEJMEBPJ_o *)0x0) {
    pOVar1 = Roster_MDHCBOFHAEL__KNMENIBLFGF(__this,(BANHBMINMMP->fields).BBELCDHPJIP,method);
    if (pOVar1 != (OLKPEJMEBPJ_o *)0x0) {
      pDVar2 = (BANHBMINMMP->fields).BBELCDHPJIP;
      if (pDVar2 == (DNELIPCHKLK_o *)0x0) goto LAB_03161040;
      pSVar3 = (System_String_o *)
               (*(pDVar2->klass->vtable)._3_ToString.methodPtr)
                         (pDVar2,(pDVar2->klass->vtable)._3_ToString.method);
      pSVar3 = System_String__Concat(StringLiteral_3427/*"Battle already exists: "*/,pSVar3,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    pDVar2 = (BANHBMINMMP->fields).BBELCDHPJIP;
    if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).DEKLKEHGJEB;
      key = (Il2CppObject *)
            (*(pDVar2->klass->vtable)._3_ToString.methodPtr)
                      (pDVar2,(pDVar2->klass->vtable)._3_ToString.method);
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_00,key,(Il2CppObject *)BANHBMINMMP,
                   Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Add__);
        return;
      }
    }
  }
LAB_03161040:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CIAADMKJGLF(OLKPEJMEBPJ BANHBMINMMP)  [RVA 0x30638F4]
// Roster.MDHCBOFHAEL$$CIAADMKJGLF @ RVA 0x30638F4

void Roster_MDHCBOFHAEL__CIAADMKJGLF
               (Roster_MDHCBOFHAEL_o *__this,OLKPEJMEBPJ_o *BANHBMINMMP,MethodInfo *method)

{
  DNELIPCHKLK_o *pDVar1;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04565f0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Remove__);
    DAT_04565f0f = 1;
  }
  if ((BANHBMINMMP != (OLKPEJMEBPJ_o *)0x0) &&
     (pDVar1 = (BANHBMINMMP->fields).BBELCDHPJIP, pDVar1 != (DNELIPCHKLK_o *)0x0)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).DEKLKEHGJEB;
    key = (Il2CppObject *)
          (*(pDVar1->klass->vtable)._3_ToString.methodPtr)
                    (pDVar1,(pDVar1->klass->vtable)._3_ToString.method);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Remove
                (__this_00,key,
                 Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Remove__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3066CD4]
// Roster.MDHCBOFHAEL$$.ctor @ RVA 0x3066CD4

void Roster_MDHCBOFHAEL___ctor(Roster_MDHCBOFHAEL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f10 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_TypeInfo);
    DAT_04565f10 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>__ctor__);
  (__this->fields).DEKLKEHGJEB =
       (System_Collections_Generic_Dictionary_string__OLKPEJMEBPJ__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void CIAADMKJGLF(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x3068780]
// Roster.MDHCBOFHAEL$$CIAADMKJGLF @ RVA 0x3068780

void Roster_MDHCBOFHAEL__CIAADMKJGLF
               (Roster_MDHCBOFHAEL_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04565f11 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Remove__);
    DAT_04565f11 = 1;
  }
  if (DBIAAJNKHLH != (DNELIPCHKLK_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).DEKLKEHGJEB;
    key = (Il2CppObject *)
          (*(DBIAAJNKHLH->klass->vtable)._3_ToString.methodPtr)
                    (DBIAAJNKHLH,(DBIAAJNKHLH->klass->vtable)._3_ToString.method);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Remove
                (__this_00,key,
                 Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_Remove__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

