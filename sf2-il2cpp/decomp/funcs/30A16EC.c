// LAMJOHEKJNJ$$NCBMPCGHHFK @ RVA 0x30A16EC

void LAMJOHEKJNJ__NCBMPCGHHFK(LAMJOHEKJNJ_o *__this,LPEBBHNDFCG_o *HIDBHIKNOBC,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566141 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Add__);
    DAT_04566141 = 1;
  }
  if (HIDBHIKNOBC != (LPEBBHNDFCG_o *)0x0) {
    LAMJOHEKJNJ__OJAKPICKBBC(__this,(HIDBHIKNOBC->fields)._COIPKAKHDFP_k__BackingField,false,in_x3);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).DIKHJEINHID;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,(Il2CppObject *)(HIDBHIKNOBC->fields)._COIPKAKHDFP_k__BackingField,
                 (Il2CppObject *)HIDBHIKNOBC,
                 Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

