// TypeDefIndex 583
// Namespace: 
// [CompilerGenerated]
// private sealed class FDJKKAFIEFB.LMFFOOFIHAP
// Fields:
//   public string langShortName; // 0x10

// ===== public void .ctor()  [RVA 0x35B3558]
// FDJKKAFIEFB.LMFFOOFIHAP$$.ctor @ RVA 0x35B3558

void FDJKKAFIEFB_LMFFOOFIHAP___ctor(FDJKKAFIEFB_LMFFOOFIHAP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool PGPHHMNEABO(DBNEEHGBCJD lang)  [RVA 0x35B5E6C]
// FDJKKAFIEFB.LMFFOOFIHAP$$PGPHHMNEABO @ RVA 0x35B5E6C

bool FDJKKAFIEFB_LMFFOOFIHAP__PGPHHMNEABO
               (FDJKKAFIEFB_LMFFOOFIHAP_o *__this,DBNEEHGBCJD_o *lang,MethodInfo *method)

{
  bool bVar1;
  
  if (lang != (DBNEEHGBCJD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((lang->fields)._AFGBGDNBOLL_k__BackingField,(__this->fields).langShortName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

