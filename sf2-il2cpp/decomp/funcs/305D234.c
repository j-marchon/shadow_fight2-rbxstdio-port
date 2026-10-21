// ACHLOMELAJE.MDHCBOFHAEL$$KNMENIBLFGF @ RVA 0x305D234

OLKPEJMEBPJ_o *
ACHLOMELAJE_MDHCBOFHAEL__KNMENIBLFGF
          (ACHLOMELAJE_MDHCBOFHAEL_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

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

