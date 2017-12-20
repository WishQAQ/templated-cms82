<li class='{dede:field.currentstyle/}'><a href="{dede:field name='typeurl'/}" class="nav-a">{dede:field name='typename'/}</a>
        <ul class="list-unstyled">
          {dede:channel type='son' noself='yes'}
          <li><a href="[field:typelink/]">[field:typename/]</a></li>
          {/dede:channel}
        </ul>
      </li>