// NHJCFGACFDF$$LFEGGMNMDMJ @ RVA 0x333A748

bool NHJCFGACFDF__LFEGGMNMDMJ(NHJCFGACFDF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  value = (System_String_o *)
          (*__this->klass[1]._1.this_arg.data)
                    (__this,*(undefined8 *)&__this->klass[1]._1.this_arg.bits);
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return (bool)(~bVar1 & 1);
}

