// TypeDefIndex 2962
// Namespace: 
// [CompilerGenerated]
// private sealed class ModelAi.OCHGKPIBCNO
// Fields:
//   public InfoAnimation animation; // 0x10

// ===== public void .ctor()  [RVA 0x34961DC]
// ModelAi.OCHGKPIBCNO$$.ctor @ RVA 0x34961DC

void ModelAi_OCHGKPIBCNO___ctor(ModelAi_OCHGKPIBCNO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool MODHDGFBHMF(MGNDHCBAPEN<string, List<ConditionalAnimation>> r)  [RVA 0x349DDA0]
// ModelAi.OCHGKPIBCNO$$MODHDGFBHMF @ RVA 0x349DDA0

bool ModelAi_OCHGKPIBCNO__MODHDGFBHMF
               (ModelAi_OCHGKPIBCNO_o *__this,MGNDHCBAPEN_string__List_OANGEOLKMJG___o *r,
               MethodInfo *method)

{
  bool bVar1;
  InfoAnimation_o *__this_00;
  
  if ((r != (MGNDHCBAPEN_string__List_OANGEOLKMJG___o *)0x0) &&
     (__this_00 = (__this->fields).animation, __this_00 != (InfoAnimation_o *)0x0)) {
    bVar1 = InfoAnimation__CBJGGDFAACP(__this_00,(r->fields).PHPELPFMOII,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

