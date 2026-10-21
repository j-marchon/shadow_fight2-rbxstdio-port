// TypeDefIndex 780
// Namespace: 
// [CompilerGenerated]
// private sealed class Roster.GOANPADALEG
// Fields:
//   public string bpName; // 0x10
//   public string itemName; // 0x18

// ===== internal bool OEKODHMHCAD(BDGPPPPKHEC c)  [RVA 0x3068948]
// Roster.GOANPADALEG$$OEKODHMHCAD @ RVA 0x3068948

bool Roster_GOANPADALEG__OEKODHMHCAD
               (Roster_GOANPADALEG_o *__this,BDGPPPPKHEC_o *c,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((c != (BDGPPPPKHEC_o *)0x0) &&
     (__this_00 = (c->fields).FHDMOOCFDHM, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).bpName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool ICKACMJPOLK(string x)  [RVA 0x3068970]
// Roster.GOANPADALEG$$ICKACMJPOLK @ RVA 0x3068970

bool Roster_GOANPADALEG__ICKACMJPOLK
               (Roster_GOANPADALEG_o *__this,System_String_o *x,MethodInfo *method)

{
  bool bVar1;
  
  if (x != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(x,(__this->fields).itemName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30686D4]
// Roster.GOANPADALEG$$.ctor @ RVA 0x30686D4

void Roster_GOANPADALEG___ctor(Roster_GOANPADALEG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

